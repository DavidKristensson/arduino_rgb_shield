void rgb(){
  if(millisCurrent - millisPreviousRGB >= intervalRGB){
    millisPreviousRGB = millisCurrent;
    if(currentColor == 1){
      changeColor(0, 30, 0);
      currentColor = 2;
    }
    else if(currentColor == 2){
      changeColor(0, 0, 30);
      currentColor = 3;
    }
    else{
      changeColor(30, 0, 0);
      currentColor = 1;
    }
  }
}
