/*
void rock_buttons() {

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

      // Send Notes On
      if (buttonCState0 == LOW) {
        
        if (prog_chosen == 21) {
          for (int Nchord_notes = 0; Nchord_notes < 3; Nchord_notes++) { 
            noteOn(1, stored_keysig + progressions[3][0] + chords[0][Nchord_notes], 127);
            MidiUSB.flush();
          }
        }
              
        else if (prog_chosen == 22) {
          for (int Nchord_notes = 0; Nchord_notes < 3; Nchord_notes++) { 
            noteOn(1, stored_keysig + progressions[4][0] + chords[0][Nchord_notes], 127);
            MidiUSB.flush();
          }
        }
              
        else if (prog_chosen == 23) {
          for (int Nchord_notes = 0; Nchord_notes < 3; Nchord_notes++) { 
            noteOn(1, stored_keysig + progressions[5][2] + chords[0][Nchord_notes], 127);
            MidiUSB.flush();
          }
        }
      }
      // Send Notes Off
      else {
    
        if (prog_chosen == 21) {
          for (int Nchord_notes = 0; Nchord_notes < 3; Nchord_notes++) { 
            noteOn(1, stored_keysig + progressions[3][0] + chords[0][Nchord_notes], 0);
            MidiUSB.flush();
          }
        }
              
        else if (prog_chosen == 22) {
          for (int Nchord_notes = 0; Nchord_notes < 3; Nchord_notes++) { 
            noteOn(1, stored_keysig + progressions[4][0] + chords[0][Nchord_notes], 0);
            MidiUSB.flush();
          }
        }
              
        else if (prog_chosen == 23) {
          for (int Nchord_notes = 0; Nchord_notes < 3; Nchord_notes++) { 
            noteOn(1, stored_keysig + progressions[5][2] + chords[0][Nchord_notes], 0);
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

      // Send Notes On
      if (buttonCState1 == LOW) {
        
        if (prog_chosen == 21) {
          for (int Nchord_notes = 0; Nchord_notes < 3; Nchord_notes++) { 
            noteOn(1, stored_keysig + progressions[3][1] + chords[0][Nchord_notes], 127);
            MidiUSB.flush();
          }
        }
              
        else if (prog_chosen == 22) {
          for (int Nchord_notes = 0; Nchord_notes < 3; Nchord_notes++) { 
            noteOn(1, stored_keysig + progressions[4][2] + chords[1][Nchord_notes], 127);
            MidiUSB.flush();
          }
        }
              
        else if (prog_chosen == 23) {
          for (int Nchord_notes = 0; Nchord_notes < 3; Nchord_notes++) { 
            noteOn(1, stored_keysig + progressions[5][1] + chords[0][Nchord_notes], 127);
            MidiUSB.flush();
          }
        }
      }
      
      // Send Notes Off
      else {
        
        if (prog_chosen == 21) {
          for (int Nchord_notes = 0; Nchord_notes < 3; Nchord_notes++) { 
            noteOn(1, stored_keysig + progressions[3][1] + chords[0][Nchord_notes], 0);
            MidiUSB.flush();
          }
        }
              
        else if (prog_chosen == 22) {
          for (int Nchord_notes = 0; Nchord_notes < 3; Nchord_notes++) { 
            noteOn(1, stored_keysig + progressions[4][2] + chords[1][Nchord_notes], 0);
            MidiUSB.flush();
          }
        }
              
        else if (prog_chosen == 23) {
          for (int Nchord_notes = 0; Nchord_notes < 3; Nchord_notes++) { 
            noteOn(1, stored_keysig + progressions[5][1] + chords[0][Nchord_notes], 0);
            MidiUSB.flush();
          }  
        }
      }
      
      // Storing state value
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
        
      // Send Notes On
      if (buttonCState2 == LOW) {
        
        if (prog_chosen == 21) {
          for (int Nchord_notes = 0; Nchord_notes < 3; Nchord_notes++) { 
            noteOn(1, stored_keysig + progressions[3][2] + chords[0][Nchord_notes], 127);
            MidiUSB.flush();
          }
        }
              
        else if (prog_chosen == 22) {
          for (int Nchord_notes = 0; Nchord_notes < 3; Nchord_notes++) { 
            noteOn(1, stored_keysig + progressions[4][3] + chords[0][Nchord_notes], 127);
            MidiUSB.flush();
          }
        }
              
        else if (prog_chosen == 23) {
          for (int Nchord_notes = 0; Nchord_notes < 3; Nchord_notes++) { 
            noteOn(1, stored_keysig + progressions[5][0] + chords[0][Nchord_notes], 127);
            MidiUSB.flush();
          }
        }
      }
            
      // Send Notes Off
      else {    
  
        if (prog_chosen == 21) {
          for (int Nchord_notes = 0; Nchord_notes < 3; Nchord_notes++) { 
            noteOn(1, stored_keysig + progressions[3][2] + chords[0][Nchord_notes], 0);
            MidiUSB.flush();
          }
        }
              
        else if (prog_chosen == 22) {
          for (int Nchord_notes = 0; Nchord_notes < 3; Nchord_notes++) { 
            noteOn(1, stored_keysig + progressions[4][3] + chords[0][Nchord_notes], 0);
            MidiUSB.flush();
          }
        }
              
        else if (prog_chosen == 23) {
          for (int Nchord_notes = 0; Nchord_notes < 3; Nchord_notes++) { 
            noteOn(1, stored_keysig + progressions[5][0] + chords[0][Nchord_notes], 0);
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
        
      // Send Notes On
      if (buttonCState3 == LOW) {
        
        if (prog_chosen == 22) {
          for (int Nchord_notes = 0; Nchord_notes < 3; Nchord_notes++) { 
            noteOn(1, stored_keysig + progressions[4][1] + chords[0][Nchord_notes], 127);
            MidiUSB.flush();
          }
        }
      }      
      // Send Notes Off
      else {
           
        if (prog_chosen == 22) {
          for (int Nchord_notes = 0; Nchord_notes < 3; Nchord_notes++) { 
            noteOn(1, stored_keysig + progressions[4][1] + chords[0][Nchord_notes], 0);
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
