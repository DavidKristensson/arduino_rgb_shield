void stateChanger(){
  if(skipStateChanger != true){
    if(millisCurrent - millisPreviousStateChanger >= intervalStateChanger){
      millisPreviousStateChanger = millisCurrent;
      if(stateMachine == MAIN){
        if(button1.state == LOW && button1.stateLast == HIGH){
          stateMachine = RGB;
        }
        else if(button2.state == LOW && button2.stateLast == HIGH){
          stateMachine = RAINBOW;
        }
      }
      else if(stateMachine == RAINBOW){
        if(button1.state == LOW && button1.stateLast == HIGH){
          stateMachine = MAIN;
        }
      }
      else if(stateMachine == RGB){
        if(button1.state == LOW && button1.stateLast == HIGH){
          stateMachine = RED;
        }
        else if(button2.state == LOW && button2.stateLast == HIGH){
          stateMachine = MAIN;
        }
      }
      else if(stateMachine == RED){
        if(button1.state == LOW && button1.stateLast == HIGH){
          stateMachine = GREEN;
        }
        else if(button2.state == LOW && button2.stateLast == HIGH){
          stateMachine = RGB;
        }
      }
      else if(stateMachine == GREEN){
        if(button1.state == LOW && button1.stateLast == HIGH){
          stateMachine = BLUE;
        }
        else if(button2.state == LOW && button2.stateLast == HIGH){
          stateMachine = RGB;
        }
      }
      else if(stateMachine == BLUE){
        if(button1.state == LOW && button1.stateLast == HIGH){
          stateMachine = RED;
        }
        else if(button2.state == LOW && button2.stateLast == HIGH){
          stateMachine = RGB;
        }
      }
    }
  }
  skipStateChanger = false;
}
