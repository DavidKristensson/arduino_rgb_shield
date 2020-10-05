void doShit(){
  if(commandToParse != "" && printStatus == true){
    directoryHandler();
    parser();
    commandHandler();
    Serial.println(printToMonitor);
    printStatus = false;
  }
  else if(commandToParse == "" && printStatus == true){
    directoryHandler();
    Serial.println(directory);
    printStatus = false;
  }
}
