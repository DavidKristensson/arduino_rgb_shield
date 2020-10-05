void potHandler(){
  potValue = analogRead(pot);
  intervalRainbow = map(analogRead(pot), 0, 1023, 5, 20);
  rgbHue = map(analogRead(pot), 1023, 0, 0, 100);
}
