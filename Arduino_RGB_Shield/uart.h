















void uart(){
  if(Serial.available() > 0){
    char c = Serial.read();

    if(c == '\n'){
      commandToParse = command;
      command = "";
      printStatus = true;
    }
    else{
      command += c;
    }
  }  
}
