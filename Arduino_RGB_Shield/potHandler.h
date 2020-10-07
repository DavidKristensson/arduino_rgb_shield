void potHandler(){ //RGB ändrar inte värde när man byter mode spara previous state?
  potValue = analogRead(pot);
  if(millisCurrent - millisPreviousPot >= intervalPot){
    millisPreviousPot - millisCurrent;
    if(potValue > (potValueLast + 2) || potValue < (potValueLast - 2)){
      serialPotActive = false;
      intervalRainbow = map(potValue, 0, 1023, 5, 20);
      rgbHue = map(potValue, 1023, 0, 0, 100);
    }
  }
  //intervalRainbow = map(analogRead(pot), 0, 1023, 5, 20);
  //rgbHue = map(analogRead(pot), 1023, 0, 0, 100);
  potValueLast = potValue;
}
