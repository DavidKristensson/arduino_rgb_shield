

















void input(){
  millisCurrent = millis();
  button1 = debounceButton(button1);
  button2 = debounceButton(button2);
  potHandler();
  uart();
  doShit();
}
