void leds() {

  if (screen == 0) {
   digitalWrite(ledPin0, HIGH);   // turn LED0 on (HIGH is the voltage level)
   digitalWrite(ledPin1, HIGH);   // turn LED1 on
   digitalWrite(ledPin2, HIGH);   // turn LED2 on
   digitalWrite(ledPin3, HIGH);   // turn LED0 on
  }

  else if ((screen == 1) and (led_counter == 0)) {
    if ((millis() - screen_time) > 2500) {
     digitalWrite(ledPin0, LOW);   // turn LED0 off
     digitalWrite(ledPin1, LOW);   // turn LED1 off
     digitalWrite(ledPin2, LOW);   // turn LED2 off
     digitalWrite(ledPin3, LOW);   // turn LED0 off
  // Change Delay Mechanism
     delay (280);
     digitalWrite(ledPin0, HIGH);   // turn LED0 on
     delay (280);
     digitalWrite(ledPin0, LOW);    // turn LED0 off
     digitalWrite(ledPin1, HIGH);   // turn LED1 on
     delay (280);  
     digitalWrite(ledPin1, LOW);    // turn LED1 off
     digitalWrite(ledPin2, HIGH);   // turn LED2 on
     delay (280);
     digitalWrite(ledPin2, LOW);    // turn LED2 off
     digitalWrite(ledPin3, HIGH);   // turn LED3 on
     delay (280);
     digitalWrite(ledPin3, LOW);    // turn LED3 off
     led_counter = led_counter + 1;
    }
  }
}
