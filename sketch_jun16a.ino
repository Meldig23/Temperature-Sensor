float temp;
void setup() {
  Serial.begin(9600);
};
void loop() {
  byte discardByte;
  if (Serial.available() >= 13) {
    if (Serial.read() == 0x7E) {
      for (int i = 1; i < 11; i++) {
        discardByte = Serial.read();
      }
      int analogMSB = Serial.read();
      int analogLSB = Serial.read();
      int analogReading = analogLSB + (analogMSB * 256);
      temp = analogReading / 1023.0 * 1301;
      temp = temp / 10;
      Serial.println(String(temp) + " degreesC ");
    }
  }
}