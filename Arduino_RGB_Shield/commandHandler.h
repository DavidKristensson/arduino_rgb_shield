










void commandHandler(){
  printToMonitor = directory;
  if(command1 == "ls"){
    if(stateMachine == MAIN){
      printToMonitor += "rainbow   rgb";
    }
    else if(stateMachine == RGB){
      printToMonitor += "red   green   blue";
    }
  }
  else if(command1 == "cd.."){
    skipStateChanger = true;
    if(stateMachine == RAINBOW){
      stateMachine = MAIN;
    }
    else if(stateMachine == RGB){
      stateMachine = MAIN;
    }
    else if(stateMachine == RED){
      stateMachine = RGB;
    }
    else if(stateMachine == GREEN){
      stateMachine = RGB;
    }
    else if(stateMachine == BLUE){
      stateMachine = RGB;
    }
    printToMonitor += command1;        
  }
  else if(command1 == "cd"){
    skipStateChanger = true;
    if(command2 == "main"){
      stateMachine = MAIN;
    }
    else if(command2 == "rainbow"){
      stateMachine = RAINBOW;
    }
    else if(command2 == "rgb"){
      stateMachine = RGB;
    }
    else if(command2 == "red"){
      stateMachine = RED;
    }
    else if(command2 == "green"){
      stateMachine = GREEN;
    }
    else if(command2 == "blue"){
      stateMachine = BLUE;
    }
    printToMonitor += command1; 
    printToMonitor += " ";
    printToMonitor += command2;
  }
  command1 = "";
  command2 = "";
}
