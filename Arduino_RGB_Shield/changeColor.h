void changeColor(int redValue, int greenValue, int blueValue){
  analogWrite(green, greenValue);
  analogWrite(blue, blueValue);
  analogWrite(red, redValue);
}

void changeRed(int redValue){
  analogWrite(red, redValue);
}

void changeGreen(int greenValue){
  analogWrite(green, greenValue);
}

void changeBlue(int blueValue){
  analogWrite(blue, blueValue);
}
