












void directoryHandler(){
  if(stateMachine == MAIN){
    directory = "/main$ ";
  }
  else if(stateMachine == RAINBOW){
    directory = "/main/rainbow$ ";
  }
  else if(stateMachine == RGB){
    directory = "/main/rgb$ ";
  }
  else if(stateMachine == RED){
    directory = "/main/rgb/red$ ";
  }
  else if(stateMachine == GREEN){
    directory = "/main/rgb/green$ ";
  }
  else if(stateMachine == BLUE){
    directory = "/main/rgb/blue$ ";
  }    
}
