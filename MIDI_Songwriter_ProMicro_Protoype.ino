//////////////////////////////////////////
//// Libraries

// MIDI Library
#include "MIDIUSB.h"
  
// Oled Display I2C
#include <Wire.h> // Include library for the I2C communication with Oled Display      ///////CHECK IF WE NEED THIS
#include <Adafruit_GFX.h>  // Include core graphics library for the display
#include <Adafruit_SSD1306.h>  // Include Adafruit_SSD1306 library to drive the display

// Neopixel
//#include "FastLED.h" // by Daniel Garcia - http://fastled.io

//////////////////////////////////////////
//// Declaring variables for random 

long keysig = {};
int progression_selected = {};

//////////////////////////////////////////
//// Couters

// For blues chords
byte counter_one = {};
byte counter_two = {};

// For leds
byte led_counter = {};

// For screen
byte selection_counter = {};
unsigned long screen_time = {};
unsigned long last_changing_screens = 
//////////////////////////////////////////
//// Progressions
byte prog_chosen = {};
const int prog_types = 9;  // Number of progression types on the array/list (row)
const int Nprog_chords = 12; // Number of chords from the biggest progression (column)

int progressions [prog_types][Nprog_chords] = {
  
  {0, 5, 7, 0}, // pop_one | Basic [I IV V I]
  {0, 5, 7, 9}, // pop_two | Basic Variation [I IV V vi]
  {9, 5, 0, 7}, // pop_three | Sad [vi IV I V]
  {0, 5, 7}, // rock_one | Basic [I IV V]
  {0, 4, 5, 7}, // rock_two | Basic Variation [I vi IV V]
  {7, 5, 0}, // rock_three | Classic [V IV I]
  {0, 5, 0, 7, 0}, // blues_one | Basic [I7 IV6 I9 V7 I]
  {0, 9, 5, 7}, // blues_two | 50s doo wop [I7 vi9 IV7 V]
  {0, 0, 0, 0, 5, 5, 0, 0, 7, 5, 0, 7} //blues_three | 12 Bars Blues [I7 I6 I9 I | IV7 IV7M I7M I6 | V9 IV9 I7M V4]
  
};

//////////////////////////////////////////
//// Chords

const int chord_types = 8;  // Number of chord types on the array/list (row)
const int Nchord_notes = 5; // Number of notes from the biggest chord (column)

int chords [chord_types][Nchord_notes] = {
  
  {48, 52, 55}, // major | [C] C3 (C3 = 'C2' on GarageBand)
  {48, 51, 55}, // minor | [Cm]
  {48, 53, 55}, // major4 | [C4]
  {48, 55, 57}, // major6 | [C6]
  {48, 52, 55, 58}, // major7 | [C7]
  {48, 52, 55, 59}, // major7M | [C7M]
  {50, 55, 58, 60}, // major9 | [C9]
  {55, 58, 60, 62, 63} // minor9 | [Cm9]
  
};

//////////////////////////////////////////
//// Oled display I2C

Adafruit_SSD1306 display(128, 64); // create display - size of the display in pixels
byte display_text_size = 1.99999993; // text font size
byte screen = {}; // variable to identify in which screen we are: welcome, pop, or rock

//////////////////////////////////////////
//// Leds

const int ledPin0 = 9;
const int ledPin1 = 8;
const int ledPin2 = 7;
const int ledPin3 = 6;

//////////////////////////////////////////
//// Buttons

/*Declaring which digital pin 
each button is connected to*/
const int buttonPin0 = 15; 
const int buttonPin1 = 14;
const int buttonPin2 = 16;
const int buttonPin3 = 10;
const int buttonPin4 = ; // Declare
  
/*Declaring the current and 
previous state (high/low) of
each button*/
byte buttonCState0 = {};
byte buttonPState0 = {};
byte buttonCState01 = {};
byte buttonPState01 = {};
byte buttonCState02 = {};
byte buttonPState02 = {};
byte buttonCState03 = {};
byte buttonPState03 = {};
byte buttonCState04 = {};
byte buttonPState04 = {};
byte buttonCState1 = {};
byte buttonPState1 = {};
byte buttonCState11 = {};
byte buttonPState11 = {};
byte buttonCState12 = {};
byte buttonPState12 = {};
byte buttonCState2 = {};
byte buttonPState2 = {};
byte buttonCState21 = {};
byte buttonPState21 = {};
byte buttonCState3 = {};
byte buttonPState3 = {};

//////////////////////////////////////////
//// Debounce

unsigned long lastDebounceTime0 = {0};
unsigned long lastDebounceTime01 = {0};
unsigned long lastDebounceTime02 = {0};
unsigned long lastDebounceTime03 = {0};
unsigned long lastDebounceTime04 = {0};
unsigned long lastDebounceTime1 = {0};
unsigned long lastDebounceTime11 = {0};
unsigned long lastDebounceTime12 = {0};
unsigned long lastDebounceTime2 = {0};
unsigned long lastDebounceTime21 = {0};
unsigned long lastDebounceTime3 = {0};
unsigned long debounceDelay = 50;

unsigned long screenDelay = 1000;
unsigned long lastScreenTime0 = {0};
unsigned long lastScreenTime1 = {0};
unsigned long lastScreenTime2 = {0};
unsigned long lastScreenTime3 = {0};

/////////////////////////////////////////////
/// Midi functions MIDIUSB Library

void noteOn(byte channel, byte pitch, byte velocity) {
  midiEventPacket_t noteOn = {0x09, 0x90 | channel, pitch, velocity};
  MidiUSB.sendMIDI(noteOn);
}
