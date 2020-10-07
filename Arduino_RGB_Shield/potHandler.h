void potHandler(){ //RGB ändrar inte värde när man byter mode spara previous state?
  potValue = analogRead(pot);
  
  if(changeLastPotValue == true){ // Ha en annan bool för detta!
    potValueLast = potValue;
    changeLastPotValue = false;
  }
  if(serialPotActive == false){
    intervalRainbow = map(analogRead(pot), 0, 1023, 5, 20);
    rgbHue = map(analogRead(pot), 1023, 0, 0, 100);
  }

  if(potValue >= (potValueLast + 10) || potValue <= (potValueLast - 10)){
    serialPotActive = false;
  }
 /* 
  if(millisCurrent - millisPreviousPot >= intervalPot){
    millisPreviousPot = millisCurrent;
    Serial.println(serialPotActive);
    Serial.print("PotValue: ");
    Serial.println(potValue);
    Serial.print("PotValueLast: ");
    Serial.println(potValueLast);
  }
  */
}
