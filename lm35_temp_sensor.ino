int sensor = A0;
void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
int value = analogRead(sensor);
float millivolts = (value / 1024.0)*5000;
int celsius = millivolts / 10;
Serial.print("temperature is:");
Serial.println(celsius);
delay(1000);

}
