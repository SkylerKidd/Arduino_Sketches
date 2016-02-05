// Fading LED

const int LED = 9;      // LED connected to
                        // digital pin 9

int lum = 1;            // Current LED brightness
bool rising = true;     // Whether brightness is rising/falling

void setup() {
  pinMode(LED, OUTPUT);
}

void loop() {
  analogWrite(LED,lum); // Write to LED
  delay(10);            // Wait 1/100th of a second
  
  if (lum >= 225)       // Flip rising/falling state
    rising = false;     // if at boundary
  else if (lum <= 0)
    rising = true;

  if (rising)           // Increment based on state
    lum++;
  else
    lum--;
}
