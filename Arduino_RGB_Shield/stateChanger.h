void stateChanger(){
  if(stateMachine == MAIN){
    if(button1.active == true){
      stateMachine = RGB;
      button1.active = false;
    }
    else if(button2.active == true){
      stateMachine = RAINBOW;
      button2.active = false;
    }
  }
  else if(stateMachine == RAINBOW){
    if(button1.active == true){
      stateMachine = MAIN;
      button1.active = false;
    }
  }
  else if(stateMachine == RGB){
    if(button1.active == true){
      stateMachine = RED;
      button1.active = false;
    }
    else if(button2.active == true){
      stateMachine = MAIN;
      button2.active = false;
    }
  }
  else if(stateMachine == RED){
    if(button1.active == true){
      stateMachine = GREEN;
      if(serialPotActive  == true){
        button1.active = false; 
      }
    }
    else if(button2.active == true){
      stateMachine = RGB;
      button2.active = false;
    }
  }
  else if(stateMachine == GREEN){
    if(button1.active == true){
      stateMachine = BLUE;
      if(serialPotActive == true){
        button1.active = false;
      }
    }
    else if(button2.active == true){
      stateMachine = RGB;
      button2.active = false;
    }
  }
  else if(stateMachine == BLUE){
    if(button1.active == true){
      stateMachine = RED;
      if(serialPotActive == true){
        button1.active = false;
      }
    }
    else if(button2.active == true){
      stateMachine = RGB;
      button2.active = false;
    }
  }
}
