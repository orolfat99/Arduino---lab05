#include<Keypad.h>
const byte ROWS = 4;
const byte COLS = 4;
char keys[ROWS][COLS] = {{'F', 'B', '7', '3'}, {'E', 'A', '6', '2'}, {'D', '9', '5', '1'}, {'C', '8', '4', '0'}};
byte rowPins[ROWS] = {8,9,10,11};
byte colPins[COLS] = {12,13,14,15};
Keypad keypad = Keypad(makeKeymap(keys), rowPins, colPins, ROWS, COLS);
void setup() {
  Serial.begin(9600);

}

void loop() {
  char key = keypad.getKey();
  if (key != NO_KEY) {
    Serial.println(key);
  }

}
