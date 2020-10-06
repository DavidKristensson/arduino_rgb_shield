


















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
    if(serialPotActive== false){
      changeRed(rgbHue);
    }
  }
  else if(stateMachine == GREEN){
    if(serialPotActive== false){
      changeGreen(rgbHue);
    }
  }
  else if(stateMachine == BLUE){
    if(serialPotActive == false){
      changeBlue(rgbHue);
    }
  }
}
