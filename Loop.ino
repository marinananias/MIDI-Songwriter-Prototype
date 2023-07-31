//////////////////////////////////////////
//// Oled Display & Joystick
/*
void oled_display() {

  switch (screen) {
  
    case 0:
    welcome_page();
    
    case 1:
    style_page();
    
    case 2:
    pop_page();
  
    case 3:
    rock_page();
   
    case 4:
    blues_page();
  
    case 5:
    random_page();
  
    break;
  }
}
*/
//////////////////////////////////////////
//// Buttons Function
/*
void buttons() {
  
  pop_buttons();
  rock_buttons();
  blues_buttons();
  
}
*/
//////////////////////////////////////////
//// Loop Function

void loop() {
  screen = 2;
  prog_chosen = 11;
  //oled_display();
  leds();
  buttons_test();
}
