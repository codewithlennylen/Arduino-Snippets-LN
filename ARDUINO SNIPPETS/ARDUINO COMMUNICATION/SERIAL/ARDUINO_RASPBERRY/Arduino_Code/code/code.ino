void setup() {
  // Initialize the Serial Interface
  Serial.begin(9600);

}

void loop() {
  // Send a message to the Raspberry Pi + a random number
  Serial.print("Hello from Arduino ");
  // send a random number between 10 and 20
  Serial.println(random(10,20));
  // Wait for a second
  delay(1000);
}
