String data;

void setup() {
  Serial.begin(9600);

}

void loop() {
  Serial.println("Hello from Arduino");
  delay(2000);
  data = Serial.read();
  Serial.println("---------------");
  Serial.println(data);
  delay(2000);
}
