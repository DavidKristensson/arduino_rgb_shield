#define green 9
#define blue 10
#define red 11
#define pot A0

int potValue = 0;
unsigned long millisPrevious = 0; 
unsigned long millisCurrent = millis();
unsigned long millisPreviousRainbow = 0; 
const long interval = 10; 
long intervalRainbow = 0; 
int currentColor = 0;

unsigned long millisPreviousStateChanger = 0;
const int intervalStateChanger = 12;
unsigned long millisPreviousRGB = 0;
const int intervalRGB = 300;
unsigned long millisPreviousFade = 0;
const int intervalFade = 10;

unsigned long millisPreviousPot = 0;
const int intervalPot = 5;

int max = 100;

int r = 100, g = 1, b = 50;
int rDirection = -1, gDirection = 1, bDirection = -1;
int rFade = 1, gFade = 1, bFade = 1;
int rDirectionFade = 1, gDirectionFade = 1, bDirectionFade = 1;

bool rainbowActive;
String commandToParse;
String directory;
String printToMonitor;
int potValueLast;
bool serialPotActive = false;

bool printStatus = false;
bool skipStateChanger = false;

String command;
String command1;
String command2;
int rgbHue;

struct Button{
  int pin;
  int debounceDelay;
  bool stateLast;
  bool reading;
  bool state;
  unsigned long debounceTimeLast;
  bool active;
};

Button button1 = {2, 10, LOW, LOW, LOW, 0, false};
Button button2 = {3, 10, LOW, LOW, LOW, 0, false};

enum STATE_MACHINE{
  STARTUP,    // 0
  MAIN,       // 1
  RAINBOW,    // 2
  RGB,        // 3
  RED,        // 4
  GREEN,      // 5
  BLUE        // 6
};

STATE_MACHINE stateMachine = STARTUP;

#include "ctype.h"
#include "potHandler.h"
#include "changeColor.h"
#include "debounceButton.h"
#include "directoryHandler.h"
#include "parser.h"
#include "commandHandler.h"
#include "commandHandler2.h"
#include "doShit.h"
#include "uart.h"
#include "input.h"
#include "startup.h"
#include "rainbow.h"
#include "rgb.h"
#include "fade.h"
#include "doStuff2.h"
#include "stateChanger.h"

void setup() { //Spara förra statet så jag kan släcka rgb när den byts bort
  Serial.begin(115200); 
  pinMode(blue, OUTPUT);
  pinMode(green, OUTPUT);
  pinMode(red, OUTPUT);
  pinMode(pot, INPUT);
  pinMode(button1.pin, INPUT);
  pinMode(button2.pin, INPUT);
  startup();
  potValue = analogRead(pot);
  potValueLast = potValue;
  attachInterrupt(digitalPinToInterrupt(button1.pin), my_interrupt_handler1, RISING);
  attachInterrupt(digitalPinToInterrupt(button2.pin), my_interrupt_handler2, RISING);
}

void my_interrupt_handler1()
{
 static unsigned long last_interrupt_time = 0;
 unsigned long interrupt_time = millis();
 // If interrupts come faster than 200ms, assume it's a bounce and ignore
 if (interrupt_time - last_interrupt_time > 20)
 {
   button1.active = true;
 }
 last_interrupt_time = interrupt_time;
}
void my_interrupt_handler2()
{
 static unsigned long last_interrupt_time = 0;
 unsigned long interrupt_time = millis();
 // If interrupts come faster than 200ms, assume it's a bounce and ignore
 if (interrupt_time - last_interrupt_time > 20)
 {
   button2.active = true;
 }
 last_interrupt_time = interrupt_time;
}

void loop() {
    input();
    stateChanger();
    doStuff2();
}
