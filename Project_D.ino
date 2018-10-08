/*專題：光敏&繼電器
 * 
 */

int photoresistor = A0;

void setup() {
  pinMode(photoresistor, INPUT);
  Serial.begin(115200);
  Serial.println("Arduino is Ready");
}

void loop() {
  int var = analogRead(photoresistor);
  Serial.println(var);
  delay(1000);
}
