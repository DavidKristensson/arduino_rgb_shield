void rainbow(){
  if(millisCurrent - millisPreviousRainbow >= intervalRainbow){
    millisPreviousRainbow = millisCurrent;
    changeColor(r,g,b);

    r = r + rDirection;
    g = g + gDirection;
    b = b + bDirection;

    if(r >= max || r <= 0){
      rDirection = rDirection * -1;
    }
    if(g >= max || g <= 0){
      gDirection = gDirection * -1;
    }
    if(b >= max || b <= 0){
      bDirection = bDirection * -1;
    }
  }
}
