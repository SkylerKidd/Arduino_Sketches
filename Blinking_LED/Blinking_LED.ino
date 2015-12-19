// Blinking LED

const int LED = 13; // LED connected to
                    // digital pin 13

// Initial setup
void setup()
{
  pinMode(LED, OUTPUT);
}

// Repeating loop
void loop()
{
  digitalWrite(LED, HIGH);  // Turn the LED on
  delay(500);               // Wait half of a second
  digitalWrite(LED, LOW);   // Turn the LED off
  delay(500);               // Wait half of a second
}

