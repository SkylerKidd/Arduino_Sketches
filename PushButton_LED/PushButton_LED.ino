// Button-pressed LED

const int LED = 13;   // LED connected to
                      // digital pin 13

const int BUTTON = 7; // Button connected to
                      // input pin 7

int val = 0;          // Stores current state
                      // of the button

// Initial setup
void setup() {
  pinMode(LED, OUTPUT);
  pinMode(BUTTON, INPUT);
}

// Repeating loop
void loop() {
  val = digitalRead(BUTTON); // Read button state

  // Check button state and write result to LED
  if (val == HIGH) {
    digitalWrite(LED, HIGH);
  } else {
    digitalWrite(LED, LOW);
  }
}
