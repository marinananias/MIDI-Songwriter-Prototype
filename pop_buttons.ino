/*
void pop_buttons() {

// Stores keysig value for all the buttons
int stored_keysig = keysig;

//////////////////////////////////////////
//// Button 0

  // Reads pin 0 from arduino
  buttonCState0 = digitalRead(buttonPin0); 

  // Debounce
  if ((millis() - lastDebounceTime0) > debounceDelay) {
  
    // Reads the state of pushbutton 0
    if (buttonPState0 != buttonCState0) {
        lastDebounceTime0 = millis();
     
     if (prog_chosen == 11 or 12 or 13) {
        
        delay (2250); 
        digitalWrite(ledPin0, HIGH);   // turn LED0 on
        
        // Send Notes On
        if (buttonCState0 == LOW) {
          for (int Nchord_notes = 0; Nchord_notes < 3; Nchord_notes++) { 
            noteOn(1, stored_keysig + progressions[0][0] + chords[0][Nchord_notes], 127);
            MidiUSB.flush();
          }
          delay (2250);
          digitalWrite(ledPin0, LOW);    // turn LED0 off
        }
        
        // Send Notes Off
        else {
          for (int Nchord_notes = 0; Nchord_notes < 3; Nchord_notes++) { 
            noteOn(1, stored_keysig + progressions[0][0] + chords[0][Nchord_notes], 0);
            MidiUSB.flush();
           }
         }
       }
      // Stores state value
      buttonPState0 = buttonCState0;
    }
  }

//////////////////////////////////////////
//// Button 1

  // Reads pin 1 from arduino
  buttonCState1 = digitalRead(buttonPin1); 

  // Debounce
  if ((millis() - lastDebounceTime1) > debounceDelay) {

    // Reads the state of pushbutton 1
    if (buttonPState1 != buttonCState1) {
        lastDebounceTime1 = millis();

      if (prog_chosen == 11 or 12 or 13) {
        delay (4500); 
        digitalWrite(ledPin1, HIGH);   // turn LED1 on
        
      // Send Notes On
      if (buttonCState1 == LOW) {
        for (int Nchord_notes = 0; Nchord_notes < 3; Nchord_notes++) { 
           noteOn(1, stored_keysig + progressions[0][1] + chords[0][Nchord_notes], 127);
           MidiUSB.flush();
        }
         delay (2250);
         digitalWrite(ledPin1, LOW);    // turn LED1 off
       }
        
      // Send Notes Off
      else {
        for (int Nchord_notes = 0; Nchord_notes < 3; Nchord_notes++) { 
          noteOn(1, stored_keysig + progressions[0][1] + chords[0][Nchord_notes], 0);
          MidiUSB.flush();
        }
       }
      }
      // Stores state value
      buttonPState1 = buttonCState1;
    }
   }
//////////////////////////////////////////
//// Button 2

  // Reads pin 2 from arduino
  buttonCState2 = digitalRead(buttonPin2); 

  // Debounce
  if ((millis() - lastDebounceTime2) > debounceDelay) {

    // Reads the state of pushbutton 2
    if (buttonPState2 != buttonCState2) {
        lastDebounceTime2 = millis();
      
      if (prog_chosen == 11 or 12 or 13) {
        delay (7000); // Problem with progression 13, because of the delay and time the button is pushed for it?
        digitalWrite(ledPin2, HIGH);   // turn LED2 on
        
        // Send Notes On
        if (buttonCState2 == LOW) {
          for (int Nchord_notes = 0; Nchord_notes < 3; Nchord_notes++) { 
            noteOn(1, stored_keysig + progressions[0][2] + chords[0][Nchord_notes], 127);
            MidiUSB.flush();
          }
         delay (2250);
         digitalWrite(ledPin2, LOW);    // turn LED2 off
        }
      
      // Send Notes Off
      else {
        for (int Nchord_notes = 0; Nchord_notes < 3; Nchord_notes++) { 
          noteOn(1, stored_keysig + progressions[0][2] + chords[0][Nchord_notes], 0);
          MidiUSB.flush();
        }
       }
      }
      // Storing state value
      buttonPState2 = buttonCState2;
   }
  }

//////////////////////////////////////////
//// Button 3

  // Reads pin 3 from arduino
  buttonCState3 = digitalRead(buttonPin3); 

  // Debounce
  if ((millis() - lastDebounceTime3) > debounceDelay) {

    // Reads the state of pushbutton 3
    if (buttonPState3 != buttonCState3) {
        lastDebounceTime3 = millis();

      if (prog_chosen == 12 or 13) {
        delay (9500); // Problem with progression 13, because of the delay and time the button is pushed for it?
        digitalWrite(ledPin3, HIGH);   // turn LED3 on
        
      // Send Notes On
      if (buttonCState3 == LOW) {
        for (int Nchord_notes = 0; Nchord_notes < 3; Nchord_notes++) { 
          noteOn(1, stored_keysig + progressions[1][3] + chords[1][Nchord_notes], 127);
          MidiUSB.flush();
          }
         delay (2250);
         digitalWrite(ledPin3, LOW);    // turn LED3 off
        }
      
      // Send Notes Off
      else {
        for (int Nchord_notes = 0; Nchord_notes < 3; Nchord_notes++) { 
          noteOn(1, stored_keysig + progressions[1][3] + chords[1][Nchord_notes], 0);
          MidiUSB.flush();
          }
        }
      }
      
      // Storing state value
      buttonPState3 = buttonCState3;
    }
  }
}
*/
