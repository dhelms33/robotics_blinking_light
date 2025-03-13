// Define the pin for the LED
const int LED_PIN = 13;

void setup() {
    // Set the LED pin as an output
    pinMode(LED_PIN, OUTPUT);
}

void loop() {
    // Turn the LED on
    digitalWrite(LED_PIN, HIGH);
    delay(1000); // Wait 1 second

    // Turn the LED off
    digitalWrite(LED_PIN, LOW);
    delay(1000); // Wait 1 second
}
