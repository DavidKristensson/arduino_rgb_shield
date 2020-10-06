

















void startup(){ 
  changeColor(max, 0, 0);
  delay(500);
  changeColor(0, max, 0);
  delay(500);
  changeColor(0, 0, max);
  delay(500);
  changeColor(max, max, max);
  delay(100);
  changeColor(0, 0, 0);
  delay(100);
  changeColor(max, max, max);
  delay(100);
  changeColor(0, 0, 0);
  delay(100);
  changeColor(max, max, max);
  delay(100);
  changeColor(0, 0, 0);
  stateMachine = MAIN;
}
