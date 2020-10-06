

















void fade(){
  if(millisCurrent - millisPreviousFade >= intervalFade){
    millisPreviousFade = millisCurrent;
    changeColor(rFade,gFade,bFade);

    rFade = rFade + rDirectionFade;
    gFade = gFade + gDirectionFade;
    bFade = bFade + bDirectionFade;

    if(rFade >= max || rFade <= 0){
      rDirectionFade = rDirectionFade * -1;
    }
    if(gFade >= max || gFade <= 0){
      gDirectionFade = gDirectionFade * -1;
    }
    if(bFade >= max || bFade <= 0){
      bDirectionFade = bDirectionFade * -1;
    }
  }
}
