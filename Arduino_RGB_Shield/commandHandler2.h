void commandHandlerMain(){
  if(command1 == "ls"){
    printToMonitor += "   rainbow   rgb";
  }  
  else if(command1 == "cd"){
    if(command2 == "rgb"){
      stateMachine = RGB;
    }
    else if(command2 == "rainbow"){
      stateMachine = RAINBOW;
    }
  }
}

void commandHandlerRainbow(){
  if(command1 == "cd.."){
    stateMachine = MAIN;
  }
  else if(command1.toInt() != false || command1.toInt() == 0){
    serialPotActive  = true;
    intervalRainbow = command1.toInt();
  }
}

void commandHandlerRgb(){
  if(command1 == "ls"){
    printToMonitor += "    red   green   blue";
  }
  else if(command1 == "cd.."){
    stateMachine = MAIN;
  }
  else if(command1 == "cd"){
    if(command2 == "red"){
      stateMachine = RED;
    }
    else if(command2 == "green"){
      stateMachine = GREEN;
    }
    else if(command2 == "blue"){
      stateMachine = BLUE;
    }
  }
}

void commandHandlerRed(){
  if(command1 == "ls"){
    printToMonitor += "    green";
  }
  else if(command1 == "cd.."){
    stateMachine = RGB;
  }
  else if(command1 == "cd"){
    if(command2 == "green"){
      stateMachine = GREEN;
    }
  }
  else if(command1 == "on"){
    serialPotActive  = true;
    changeRed(max);
  }
  else if(command1 == "off"){
    serialPotActive  = true;
    changeRed(0);
  }
  else if(command1.toInt() != false || command1.toInt() == 0){
    serialPotActive  = true;
    changeRed(command1.toInt());
  }
}

void commandHandlerGreen(){
  if(command1 == "ls"){
    printToMonitor += "    blue";
  }
  else if(command1 == "cd.."){
    stateMachine = RGB;
  }
  else if(command1 == "cd"){
    if(command2 == "blue"){
      stateMachine = BLUE;
    }
  }
  else if(command1 == "on"){
    serialPotActive  = true;
    changeGreen(max);
  }
  else if(command1 == "off"){
    serialPotActive  = true;
    changeGreen(0);
  }
  else if(command1.toInt() != false || command1.toInt() == 0){
    serialPotActive  = true;
    changeGreen(command1.toInt());
  }
}

void commandHandlerBlue(){
  if(command1 == "ls"){
    printToMonitor += "    red";
  }
  else if(command1 == "cd.."){
    stateMachine = RGB;
  }
  else if(command1 == "cd"){
    if(command2 == "red"){
      stateMachine = RED;
    }
  }
  else if(command1 == "on"){
    serialPotActive  = true;
    changeBlue(max);
  }
  else if(command1 == "off"){
    serialPotActive  = true;
    changeBlue(0);
  }
  else if(command1.toInt() != false || command1.toInt() == 0){
    serialPotActive  = true;
    changeBlue(command1.toInt());
  }
}



void commandHandler2(){
  printToMonitor = directory;
  if(stateMachine == MAIN){
    commandHandlerMain();
  }
  else if(stateMachine == RAINBOW){
    commandHandlerRainbow();
  }
  else if(stateMachine == RGB){
    commandHandlerRgb();
  }
  else if(stateMachine == RED){
    commandHandlerRed();
  }
  else if(stateMachine == GREEN){
    commandHandlerGreen();
  }
  else if(stateMachine == BLUE){
    commandHandlerBlue();
  }
}
