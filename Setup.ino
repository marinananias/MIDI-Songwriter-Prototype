void setup() {

//////////////////////////////////////////
/// Baud Rate
  
Serial.begin (31250);

//////////////////////////////////////////
/// Key Signature

/*Initializes the pseudo-random number generator
with the noise of a non-sed analog pin*/
randomSeed(analogRead(0));

/*Choses a random number from 1-11. Ex: If 
we start on C, "1" would give us C#/Db*/
keysig = random (1,12);

/////////////////////////////////////////////
/// Buttons

  // Initializing buttons
  pinMode(buttonPin0, INPUT_PULLUP);
  pinMode(buttonPin1, INPUT_PULLUP);
  pinMode(buttonPin2, INPUT_PULLUP);
  pinMode(buttonPin3, INPUT_PULLUP);
  pinMode(buttonPin4, INPUT_PULLUP);

/////////////////////////////////////////////
/// Leds

  // Initializing leds
  pinMode(ledPin0, OUTPUT);
  pinMode(ledPin1, OUTPUT);
  pinMode(ledPin2, OUTPUT);
  pinMode(ledPin3, OUTPUT);

/////////////////////////////////////////////
/// Display

  // Initializing the display
  delay(100);  // delay needed to let the display initialize
  display.begin(SSD1306_SWITCHCAPVCC, 0x3C);  // Initialize display with the I2C address of 0x3C
  display.clearDisplay();  // Clear the buffer

  // Customizing
  display.dim(0); // set brightness (0 is maximun and 1 is a little dim)
  display.setRotation(0);  // set orientation. Goes from 0, 1, 2 or 3
  display.setTextColor(WHITE);  // set color of the text
  display.setTextSize(display_text_size);
  
  display.setTextWrap(false);  
  // By default, long lines of text are set to automatically “wrap” back to the leftmost column.
  // To override this behavior (so text will run off the right side of the display - useful for
  // scrolling marquee effects), use setTextWrap(false). The normal wrapping behavior is restored
  // with setTextWrap(true).
}
