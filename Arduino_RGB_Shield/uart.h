void uart(){
  if(Serial.available() > 0){
    char c = Serial.read();

    if(c == '\n'){
      commandToParse = command;
      command = "";
      printStatus = true;
      //Serial.println(directory); Directories ska inte printas här men ska säga till att det ska printas
    }
    else{
      command += c;
    }
  }  
}
