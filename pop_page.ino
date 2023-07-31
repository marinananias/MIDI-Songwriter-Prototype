void pop_page() {
  
/////////////////////////////////////////////
// Display

  // Initializing
  display.clearDisplay();  // Clear the buffer

  // Storing
  display.setCursor(49,3);
  display.print("-Pop-");
  display.setCursor(0,12);
  display.println(">Basic");
  display.setCursor(0,22);
  display.println(">Basic Variation");
  display.setCursor(0,33);
  display.println(">Sad");
  display.setCursor(0,44);
  display.println(">Return?");

  // Printing
  display.display();
  delay(20);

/////////////////////////////////////////////
// Pop - Basic

  if (analogRead(y_axis) < 370) {
  
    display.fillRect(0, 12, 200, 8, BLACK);
    display.setCursor(0,12);
    display.println(">BASIC<");
        
    display.display();
    delay(1500);
  
    if (analogRead(y_axis) <= 520 and digitalRead(SW) == LOW) {
      prog_chosen = 11;
    }
  }

/////////////////////////////////////////////
// Pop - Basic Variation
  
  else if (analogRead(y_axis) > 207 and analogRead(y_axis) < 560) {

    display.fillRect(0, 22, 200, 8, BLACK);
    display.setCursor(0,22);
    display.println(">BASIC VARIATION<");
        
    display.display();
    delay(1500);

    if (analogRead(y_axis) <= 520 and digitalRead(SW) == LOW) {
      prog_chosen = 12;
    }
  }
  
/////////////////////////////////////////////
// Pop - Sad

  else if ((analogRead(y_axis) > 563) and (analogRead(y_axis) < 750)) {
    
    display.fillRect(0, 33, 200, 8, BLACK);
    display.setCursor(0,33);
    display.println(">SAD<");
        
    display.display();
    delay(1500);

    if (analogRead(y_axis) <= 520 and digitalRead(SW) == LOW) {
      prog_chosen = 13;
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
