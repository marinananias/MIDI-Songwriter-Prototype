/*
void blues_page () {

/////////////////////////////////////////////
// Display

  // Initializing
  display.clearDisplay();  // Clear the buffer

  // Storing
  display.setCursor(49,3);
  display.print("-Blues-");
  display.setCursor(0,12);
  display.println(">Basic");
  display.setCursor(0,22);
  display.println(">50s doo wop");
  display.setCursor(0,33);
  display.println(">12 Bars Blues");
  display.setCursor(0,44);
  display.println(">Return?");

  // Printing
  display.display();
  delay(20);

/////////////////////////////////////////////
// Blues - Basic

  if (analogRead(y_axis) < 370) {
  
    display.fillRect(0, 12, 200, 8, BLACK);
    display.setCursor(0,12);
    display.println(">BASIC<");
    
    display.display();
    delay(1500);
  
    if (analogRead(y_axis) <= 520 and digitalRead(SW) == LOW) {
      prog_chosen = 31;
    }
  }

/////////////////////////////////////////////
// Blues - 50s doo wop
  
  else if (analogRead(y_axis) > 207 and analogRead(y_axis) < 560) {

    display.fillRect(0, 22, 200, 8, BLACK);
    display.setCursor(0,22);
    display.println(">50s DOO WOP<");
        
    display.display();
    delay(1500);

    if (analogRead(y_axis) <= 520 and digitalRead(SW) == LOW) {
      prog_chosen = 32;
    }
  }
 
/////////////////////////////////////////////
// 12 Bars Blues

  else if ((analogRead(y_axis) > 563) and (analogRead(y_axis) < 750)) {
    
    display.fillRect(0, 33, 200, 8, BLACK);
    display.setCursor(0,33);
    display.println(">12 BARS BLUES");
        
    display.display();
    delay(1500);

    if (analogRead(y_axis) <= 520 and digitalRead(SW) == LOW) {
      prog_chosen = 33;
    }
  }
  
/////////////////////////////////////////////
// Return

  else if (analogRead(y_axis) > 750) {

    display.fillRect(0, 44, 200, 8, BLACK);
    display.setCursor(0,44);
    display.println(">RETRUN?");
        
    display.display();
    delay(1500);

    if (analogRead(y_axis) <= 520 and digitalRead(SW) == LOW) {
        screen = 1;
    }
  }
}
*/
