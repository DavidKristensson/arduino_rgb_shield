void parser(){
  commandToParse.toLowerCase();
  
  int firstSpace = commandToParse.indexOf(32, 0);
  command1 = commandToParse.substring(0, firstSpace);
  
  int endOfString = commandToParse.length();
  command2 = commandToParse.substring((firstSpace + 1), endOfString);
  commandToParse = "";
}
