///////////////////////////////////////////
//// Welcome Page 

void welcome_page() {

  // Initializing
  display.clearDisplay();  // Clear the buffer

  display.setCursor(17,7);
  display.print("MIDI Songwriter");
  display.setCursor(40,31);
  display.print("{START}");

  display.display();
  delay(20); // CHECK IF THE DELAY ON THOSE PLACES WILL BE A PROBLEM OR EVEN IF NEEDED

  if (digitalRead(buttonPin4) == LOW) {
    screen_time = millis();
    screen = 1;
  }
}

///////////////////////////////////////////
//// Style Page 

void style_page() {

  // Initializing
  display.clearDisplay();  // Clear the buffer

  // Selecting Progression
  display.setCursor(13,3);
  display.print("-MIDI Songwriter-");
  display.setCursor(0,12);
  display.print(">POP<");
  display.setCursor(0,22);
  display.print(">Rock");
  display.setCursor(0,33);
  display.print(">Blues");
  display.setCursor(0,44);
  display.print(">Random");
  
  display.display();
  delay(20);

  // Counter (each 2 seconds the counter needs to increment 1)

 // if ((millis() - lastScreenTime) > screenDelay) {
 //   selection_counter = selection_counter++;
 //   lastDebounceTime = millis();
 // }
  
  // selection_counter = selection_counter++; 
  // for (int selection_counter = 0; selection_counter < 3; selection_counter++) {

  
  // Change Selection
  switch (selection_counter) {
  
    case 0:
    delay(1500);

    case 1:
    display.fillRect(0, 22, 200, 8, BLACK);
    display.setCursor(0,22);
    display.print(">ROCK<");
    display.display();
    delay(1500);
  
    case 2:
    display.fillRect(0, 33, 200, 8, BLACK);
    display.setCursor(0,33);
    display.print(">BLUES<");
    display.display();
    delay(1500);
    
    case 3:
    display.fillRect(0, 44, 200, 8, BLACK);
    display.setCursor(0,44);
    display.print(">RANDOM<");
    display.display();
    delay(1500);
  
    break;
  }
  
  // Select Mode
  if (digitalRead(buttonPin4) == LOW) {
    
    switch (selection_counter) {
    
      case 0:
      screen = 2;
      
      case 1:
      screen = 3;
  
      case 2:
      screen = 4;
  
      case 3:
      screen = 5;
      
      break;
    }
  }
}
