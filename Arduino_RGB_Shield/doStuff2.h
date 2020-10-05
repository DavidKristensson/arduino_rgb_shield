void doStuff2(){
  if(stateMachine == MAIN){
    fade();
  }
  else if(stateMachine == RAINBOW){
    rainbow();
  }
  else if(stateMachine == RGB){
    rgb();
  }
  else if(stateMachine == RED){
    changeRed(rgbHue);
  }
  else if(stateMachine == GREEN){
    changeGreen(rgbHue);
  }
  else if(stateMachine == BLUE){
    changeBlue(rgbHue);
  }
}
