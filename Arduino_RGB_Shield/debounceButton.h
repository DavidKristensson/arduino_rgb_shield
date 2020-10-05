Button debounceButton(Button buttonNumber){ //Fixa knappbool piss
  buttonNumber.reading = digitalRead(buttonNumber.pin);
  if (buttonNumber.reading != buttonNumber.stateLast) {
    buttonNumber.debounceTimeLast = millis();
  }
  if ((millis() - buttonNumber.debounceTimeLast) > buttonNumber.debounceDelay) {
    if (buttonNumber.reading != buttonNumber.state) {
      buttonNumber.state = buttonNumber.reading;
    }
  }
  buttonNumber.stateLast = buttonNumber.reading;
  return buttonNumber;
}
