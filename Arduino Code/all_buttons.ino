void all_buttons() {

// Stores keysig value for all the buttons
int stored_keysig = keysig;

//////////////////////////////////////////
//// Button 0 (I)

  // Reads pin 0 from arduino
  buttonCState0 = digitalRead(buttonPin0); 

  // Debounce
  if ((millis() - lastDebounceTime0) > debounceDelay) {
  
    // Reads the state of pushbutton 0
    if (buttonPState0 != buttonCState0) {
        lastDebounceTime0 = millis();
     
     switch (prog_chosen) {
     
       case 11 or 12 or 13 or 21 or 22 oe 23:

        // Send Notes On
        if (buttonCState0 == LOW) {
          for (int Nchord_notes = 0; Nchord_notes < 3; Nchord_notes++) { 
            noteOn(1, stored_keysig + 0 + chords[0][Nchord_notes], 127);
            MidiUSB.flush();
          }
        }
        
        // Send Notes Off
        else {
          for (int Nchord_notes = 0; Nchord_notes < 3; Nchord_notes++) { 
            noteOn(1, stored_keysig + 0 + chords[0][Nchord_notes], 0);
            MidiUSB.flush();
           }
         }
         
       break;

       }
      // Stores state value
      buttonPState0 = buttonCState0;
    }
  }

//////////////////////////////////////////
//// Button 1 (IV)

  // Reads pin 1 from arduino
  buttonCState1 = digitalRead(buttonPin1); 

  // Debounce
  if ((millis() - lastDebounceTime1) > debounceDelay) {

    // Reads the state of pushbutton 1
    if (buttonPState1 != buttonCState1) {
        lastDebounceTime1 = millis();

      switch (prog_chosen) {
     
        case 11 or 12 or 13 or 21 or 22 oe 23:
        
          // Send Notes On
          if (buttonCState1 == LOW) {
            for (int Nchord_notes = 0; Nchord_notes < 3; Nchord_notes++) { 
               noteOn(1, stored_keysig + 5 + chords[0][Nchord_notes], 127);
               MidiUSB.flush();
            }
          }
            
          // Send Notes Off
          else {
            for (int Nchord_notes = 0; Nchord_notes < 3; Nchord_notes++) { 
              noteOn(1, stored_keysig + 5 + chords[0][Nchord_notes], 0);
              MidiUSB.flush();
            }
          }

       break; 
      }
      // Stores state value
      buttonPState1 = buttonCState1;
    }
  }
//////////////////////////////////////////
//// Button 2 (V)

  // Reads pin 2 from arduino
  buttonCState2 = digitalRead(buttonPin2); 

  // Debounce
  if ((millis() - lastDebounceTime2) > debounceDelay) {

    // Reads the state of pushbutton 2
    if (buttonPState2 != buttonCState2) {
        lastDebounceTime2 = millis();
      
      switch (prog_chosen) {
     
        case 11 or 12 or 13 or 21 or 22 oe 23:
        
          // Send Notes On
          if (buttonCState2 == LOW) {
            for (int Nchord_notes = 0; Nchord_notes < 3; Nchord_notes++) { 
              noteOn(1, stored_keysig + 7 + chords[0][Nchord_notes], 127);
              MidiUSB.flush();
            }
          }
        
        // Send Notes Off
        else {
          for (int Nchord_notes = 0; Nchord_notes < 3; Nchord_notes++) { 
            noteOn(1, stored_keysig + 7 + chords[0][Nchord_notes], 0);
            MidiUSB.flush();
          }
         }
         
       break;
      }
      // Storing state value
      buttonPState2 = buttonCState2;
    }
  }

//////////////////////////////////////////
//// Button 3 (VI)

  // Reads pin 3 from arduino
  buttonCState3 = digitalRead(buttonPin3); 

  // Debounce
  if ((millis() - lastDebounceTime3) > debounceDelay) {

    // Reads the state of pushbutton 3
    if (buttonPState3 != buttonCState3) {
        lastDebounceTime3 = millis();

      switch (prog_chosen) {
     
        case 12 or 13 or 22:
        
          // Send Notes On
          if (buttonCState3 == LOW) {
            for (int Nchord_notes = 0; Nchord_notes < 3; Nchord_notes++) { 
              noteOn(1, stored_keysig + 9 + chords[1][Nchord_notes], 127);
              MidiUSB.flush();
            }
          }
          
          // Send Notes Off
          else {
            for (int Nchord_notes = 0; Nchord_notes < 3; Nchord_notes++) { 
              noteOn(1, stored_keysig + 9 + chords[1][Nchord_notes], 0);
              MidiUSB.flush();
            }
          }
        
        break;
      }
      
      // Storing state value
      buttonPState3 = buttonCState3;
    }
  }
}
