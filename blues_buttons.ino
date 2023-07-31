//////////////////////////////////////////
//// FIRST FUNCTION
void blues_buttons_one() {

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
      if (buttonCState0 == LOW and counter_one == 0) {
  
        if (prog_chosen == 31) {
          for (int Nchord_notes = 0; Nchord_notes < 4; Nchord_notes++) { 
            noteOn(1, stored_keysig + progressions[6][0] + chords[4][Nchord_notes], 127);
            MidiUSB.flush();
          }
        }
    
        else if (prog_chosen == 32) {
          for (int Nchord_notes = 0; Nchord_notes < 4; Nchord_notes++) { 
            noteOn(1, stored_keysig + progressions[7][0] + chords[4][Nchord_notes], 127);
            MidiUSB.flush();
          }
        }
    
        else if (prog_chosen == 33) {
        for (int Nchord_notes = 0; Nchord_notes < 4; Nchord_notes++) { 
          noteOn(1, stored_keysig + progressions[8][0] + chords[4][Nchord_notes], 127);
          MidiUSB.flush();
        }
        }
      }
  
      else {
        
        if (prog_chosen == 31) {
          for (int Nchord_notes = 0; Nchord_notes < 4; Nchord_notes++) { 
            noteOn(1, stored_keysig + progressions[6][0] + chords[4][Nchord_notes], 0);
            MidiUSB.flush();
          }
        }
    
        else if (prog_chosen == 32) {
          for (int Nchord_notes = 0; Nchord_notes < 4; Nchord_notes++) { 
            noteOn(1, stored_keysig + progressions[7][0] + chords[4][Nchord_notes], 0);
            MidiUSB.flush();
          }
        }
    
          else if (prog_chosen == 33) {
          for (int Nchord_notes = 0; Nchord_notes < 4; Nchord_notes++) { 
            noteOn(1, stored_keysig + progressions[8][0] + chords[4][Nchord_notes], 0);
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
      if (buttonCState1 == LOW and counter_one == 0) {
        
        if (prog_chosen == 31) {
          for (int Nchord_notes = 0; Nchord_notes < 3; Nchord_notes++) { 
            noteOn(1, stored_keysig + progressions[6][1] + chords[3][Nchord_notes], 127);
            MidiUSB.flush();
          }
        }
    
        else if (prog_chosen == 32) {
          for (int Nchord_notes = 0; Nchord_notes < 4; Nchord_notes++) { 
            noteOn(1, stored_keysig + progressions[7][2] + chords[4][Nchord_notes], 127);
            MidiUSB.flush();
          }
        }
    
        else if (prog_chosen == 33) {
          for (int Nchord_notes = 0; Nchord_notes < 4; Nchord_notes++) { 
            noteOn(1, stored_keysig + progressions[8][4] + chords[4][Nchord_notes], 127);
            MidiUSB.flush();
          } 
        }
      }  
  
      // Send Notes Off
      else {
        
        if (prog_chosen == 31) {
          for (int Nchord_notes = 0; Nchord_notes < 3; Nchord_notes++) { 
            noteOn(1, stored_keysig + progressions[6][1] + chords[3][Nchord_notes], 0);
            MidiUSB.flush();
          }
        }
    
        else if (prog_chosen == 32) {
          for (int Nchord_notes = 0; Nchord_notes < 4; Nchord_notes++) { 
            noteOn(1, stored_keysig + progressions[7][2] + chords[4][Nchord_notes], 0);
            MidiUSB.flush();
          }
        }
    
        else if (prog_chosen == 33) {
          for (int Nchord_notes = 0; Nchord_notes < 4; Nchord_notes++) { 
            noteOn(1, stored_keysig + progressions[8][4] + chords[4][Nchord_notes], 0);
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

      // Send Notes On (1)
      if (buttonCState2 == LOW and counter_one == 0) {
  
        if (prog_chosen == 31) {
          for (int Nchord_notes = 0; Nchord_notes < 4; Nchord_notes++) { 
            noteOn(1, stored_keysig + progressions[6][3] + chords[4][Nchord_notes], 127);
            MidiUSB.flush();
          }
        }
    
        else if (prog_chosen == 32) {
          for (int Nchord_notes = 0; Nchord_notes < 3; Nchord_notes++) { 
            noteOn(1, stored_keysig + progressions[7][3] + chords[0][Nchord_notes], 127);
            MidiUSB.flush();
          }
        }
    
        else if (prog_chosen == 33) {
          for (int Nchord_notes = 0; Nchord_notes < 4; Nchord_notes++) { 
            noteOn(1, stored_keysig + progressions[8][8] + chords[6][Nchord_notes], 127);
            MidiUSB.flush();
          } 
        }
        
        counter_one = counter_one + 1;
      }  

      // Send Notes Off
      else {
  
        if (prog_chosen == 31) {
          for (int Nchord_notes = 0; Nchord_notes < 4; Nchord_notes++) { 
            noteOn(1, stored_keysig + progressions[6][3] + chords[6][Nchord_notes], 0);
            MidiUSB.flush();
          }
        }
    
        else if (prog_chosen == 32) {
          for (int Nchord_notes = 0; Nchord_notes < 3; Nchord_notes++) { 
            noteOn(1, stored_keysig + progressions[7][3] + chords[0][Nchord_notes], 0);
            MidiUSB.flush();
          }
        }
    
        else if (prog_chosen == 33) {
          for (int Nchord_notes = 0; Nchord_notes < 4; Nchord_notes++) { 
            noteOn(1, stored_keysig + progressions[8][8] + chords[6][Nchord_notes], 0);
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
      if (buttonCState3 == LOW and counter_two == 0) {
        
        if (prog_chosen == 32) {
          for (int Nchord_notes = 0; Nchord_notes < 5; Nchord_notes++) { 
            noteOn(1, stored_keysig + progressions[7][1] + chords[7][Nchord_notes], 127);
            MidiUSB.flush();
          }
        }
        counter_two = counter_two + 1;
      }
      
      // Send Notes Off
      else {
        
        if (prog_chosen == 32) {
          for (int Nchord_notes = 0; Nchord_notes < 5; Nchord_notes++) { 
            noteOn(1, stored_keysig + progressions[7][1] + chords[7][Nchord_notes], 0);
            MidiUSB.flush();
          }
        }
      }
      
      // Storing state value
      buttonPState3 = buttonCState3;
    }
  }
}

//////////////////////////////////////////
//// SECOND FUNCTION

void blues_buttons_two() {

// Stores keysig value for all the buttons
int stored_keysig = keysig;

//////////////////////////////////////////
//// Button 0

  // Reads pin 0 from arduino
  buttonCState01 = digitalRead(buttonPin0); 

  // Debounce
  if ((millis() - lastDebounceTime01) > debounceDelay) {
  
    // Reads the state of pushbutton 0
    if (buttonPState01 != buttonCState01) {
        lastDebounceTime01 = millis();

      // Send Notes On
      if (buttonCState01 == LOW and counter_one == 1) {
  
        if (prog_chosen == 31) {
          for (int Nchord_notes = 0; Nchord_notes < 4; Nchord_notes++) { 
            noteOn(1, stored_keysig + progressions[6][2] + chords[6][Nchord_notes], 127);
            MidiUSB.flush();
          }
        }
        
        else if (prog_chosen == 33) {
          for (int Nchord_notes = 0; Nchord_notes < 3; Nchord_notes++) { 
            noteOn(1, stored_keysig + progressions[8][1] + chords[3][Nchord_notes], 127);
            MidiUSB.flush();
          } 
        }
        
        counter_two = counter_two + 1;
      }
  
      else {

        if (prog_chosen == 31) {
          for (int Nchord_notes = 0; Nchord_notes < 4; Nchord_notes++) { 
            noteOn(1, stored_keysig + progressions[6][2] + chords[6][Nchord_notes], 0);
            MidiUSB.flush();
          }
        }
        
        else if (prog_chosen == 33) {
          for (int Nchord_notes = 0; Nchord_notes < 3; Nchord_notes++) { 
            noteOn(1, stored_keysig + progressions[8][1] + chords[3][Nchord_notes], 0);
            MidiUSB.flush();
          } 
        }       
      }
     
      // Stores state value
      buttonPState01 = buttonCState01;
    }
  }
//////////////////////////////////////////
//// Button 1

  // Reads pin 1 from arduino
  buttonCState11 = digitalRead(buttonPin1); 

  // Debounce
  if ((millis() - lastDebounceTime11) > debounceDelay) {

    // Reads the state of pushbutton 1
    if (buttonPState11 != buttonCState11) {
        lastDebounceTime11 = millis();
        
      // Send Notes On
      if (buttonCState11 == LOW and counter_one == 1) {
        
        if (prog_chosen == 33) {
          for (int Nchord_notes = 0; Nchord_notes < 4; Nchord_notes++) { 
            noteOn(1, stored_keysig + progressions[8][5] + chords[5][Nchord_notes], 127);
            MidiUSB.flush();
          } 
        }
      }  
  
      // Send Notes Off
      else {
        
        if (prog_chosen == 33) {
          for (int Nchord_notes = 0; Nchord_notes < 4; Nchord_notes++) { 
            noteOn(1, stored_keysig + progressions[8][5] + chords[5][Nchord_notes], 0);
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
  buttonCState21 = digitalRead(buttonPin2); 

  // Debounce
  if ((millis() - lastDebounceTime21) > debounceDelay) {

    // Reads the state of pushbutton 2
    if (buttonPState21 != buttonCState21) {
        lastDebounceTime21 = millis();

      // Send Notes On
      if (buttonCState21 == LOW and counter_one == 1) {
  
        if (prog_chosen == 33) {
          for (int Nchord_notes = 0; Nchord_notes < 4; Nchord_notes++) { 
            noteOn(1, stored_keysig + progressions[8][11] + chords[2][Nchord_notes], 127);
            MidiUSB.flush();
          } 
        }

        counter_one = counter_one + 1;
      }  
  
      // Send Notes Off
      else {
  
        if (prog_chosen == 33) {
          for (int Nchord_notes = 0; Nchord_notes < 4; Nchord_notes++) { 
            noteOn(1, stored_keysig + progressions[8][11] + chords[2][Nchord_notes], 0);
            MidiUSB.flush();
          }
        }          
      }
      
      // Storing state value
      buttonPState21 = buttonCState21;
    }
  }
}
//////////////////////////////////////////
//// THIRD FUNCTION
void blues_buttons_three() {

// Stores keysig value for all the buttons
int stored_keysig = keysig;

//////////////////////////////////////////
//// Button 0

  // Reads pin 0 from arduino
  buttonCState02 = digitalRead(buttonPin0); 

  // Debounce
  if ((millis() - lastDebounceTime02) > debounceDelay) {
  
    // Reads the state of pushbutton 0
    if (buttonPState02 != buttonCState02) {
        lastDebounceTime02 = millis();

      // Send Notes On
      if (buttonCState02 == LOW and counter_two == 2) {
  
        if (prog_chosen == 31) {
          for (int Nchord_notes = 0; Nchord_notes < 3; Nchord_notes++) { 
            noteOn(1, stored_keysig + progressions[6][4] + chords[0][Nchord_notes], 127);
            MidiUSB.flush();
          }
        }
      }
      
      if (buttonCState02 == LOW and counter_one == 2) {
        
        if (prog_chosen == 33) {
          for (int Nchord_notes = 0; Nchord_notes < 4; Nchord_notes++) { 
            noteOn(1, stored_keysig + progressions[8][2] + chords[6][Nchord_notes], 127);
            MidiUSB.flush();
          } 
        }
      }
  
      else {

        if (prog_chosen == 31) {
          for (int Nchord_notes = 0; Nchord_notes < 3; Nchord_notes++) { 
            noteOn(1, stored_keysig + progressions[6][4] + chords[0][Nchord_notes], 0);
            MidiUSB.flush();
          }
        }
        
        else if (prog_chosen == 33) {
          for (int Nchord_notes = 0; Nchord_notes < 4; Nchord_notes++) { 
            noteOn(1, stored_keysig + progressions[8][2] + chords[6][Nchord_notes], 0);
            MidiUSB.flush();
          }      
        } 
      }
     
      // Stores state value
      buttonPState02 = buttonCState02;
    }
  }

//////////////////////////////////////////
//// Button 1

  // Reads pin 1 from arduino
  buttonCState12 = digitalRead(buttonPin1); 

  // Debounce
  if ((millis() - lastDebounceTime12) > debounceDelay) {

    // Reads the state of pushbutton 1
    if (buttonPState12 != buttonCState12) {
        lastDebounceTime12 = millis();
        
      // Send Notes On
      if (buttonCState12 == LOW and counter_one == 1) {
        
        if (prog_chosen == 33) {
          for (int Nchord_notes = 0; Nchord_notes < 4; Nchord_notes++) { 
            noteOn(1, stored_keysig + progressions[8][9] + chords[6][Nchord_notes], 127);
            MidiUSB.flush();
          } 
        }

        counter_one = counter_one + 1;
      }  
  
      // Send Notes Off
      else {
        
        if (prog_chosen == 33) {
          for (int Nchord_notes = 0; Nchord_notes < 4; Nchord_notes++) { 
            noteOn(1, stored_keysig + progressions[8][9] + chords[6][Nchord_notes], 0);
            MidiUSB.flush();
          } 
        }
      }
     
      // Stores state value
      buttonPState12 = buttonCState12;
    }
  }
}
//////////////////////////////////////////
//// FORTH FUNCTION
void blues_buttons_four() {

// Stores keysig value for all the buttons
int stored_keysig = keysig;

//////////////////////////////////////////
//// Button 0

  // Reads pin 0 from arduino
  buttonCState03 = digitalRead(buttonPin0); 

  // Debounce
  if ((millis() - lastDebounceTime03) > debounceDelay) {
  
    // Reads the state of pushbutton 0
    if (buttonPState03 != buttonCState03) {
        lastDebounceTime03 = millis();

      // Send Notes On
      if (buttonCState03 == LOW and counter_one == 3) {
  
        if (prog_chosen == 33) {
          for (int Nchord_notes = 0; Nchord_notes < 3; Nchord_notes++) { 
            noteOn(1, stored_keysig + progressions[8][7] + chords[3][Nchord_notes], 127);
            MidiUSB.flush();
          } 
        }
        
        counter_one = counter_one + 1;
      }
      
      // Send Notes Off
      else {

        if (prog_chosen == 33) {
          for (int Nchord_notes = 0; Nchord_notes < 3; Nchord_notes++) { 
            noteOn(1, stored_keysig + progressions[8][7] + chords[3][Nchord_notes], 0);
            MidiUSB.flush();
          }
        }        
      }
     
      // Stores state value
      buttonPState03 = buttonCState03;
    }
  }
}

//////////////////////////////////////////
//// FIFTH FUNCTION
void blues_buttons_five() {

// Stores keysig value for all the buttons
int stored_keysig = keysig;
  
//////////////////////////////////////////
//// Button 0

  // Reads pin 0 from arduino
  buttonCState04 = digitalRead(buttonPin0); 

  // Debounce
  if ((millis() - lastDebounceTime04) > debounceDelay) {
  
    // Reads the state of pushbutton 0
    if (buttonPState04 != buttonCState04) {
        lastDebounceTime04 = millis();

      // Send Notes On
      if (buttonCState04 == LOW and counter_one == 4) {
  
        if (prog_chosen == 33) {
          for (int Nchord_notes = 0; Nchord_notes < 4; Nchord_notes++) { 
            noteOn(1, stored_keysig + progressions[8][10] + chords[5][Nchord_notes], 127);
            MidiUSB.flush();
          } 
        }
        counter_one = counter_one + 1;
      }
      
      // Send Notes Off
      else {

        if (prog_chosen == 33) {
          for (int Nchord_notes = 0; Nchord_notes < 4; Nchord_notes++) { 
            noteOn(1, stored_keysig + progressions[8][10] + chords[5][Nchord_notes], 0);
            MidiUSB.flush();
          } 
        }       
       }
     
      // Stores state value
      buttonPState04 = buttonCState04;
    }
  }
}

void blues_buttons () {
  
  blues_buttons_one();
  blues_buttons_two();
  blues_buttons_three();
  blues_buttons_four();
  blues_buttons_five();

}
