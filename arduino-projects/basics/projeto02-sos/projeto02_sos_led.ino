
int ledPin = 10;
//LED connected to digital pin 10
void setup()
 {
  // put your setup code here, to run once:
   pinMode(ledPin, OUTPUT);
 }
void loop() {
  // put your main code here, to run repeatedly:
 for (int x=0; x<3; x++)
 {
  digitalWrite(ledPin, HIGH);
  delay(150); // waits for 150ms
  digitalWrite(ledPin, LOW);
  delay(100); // waits for 100ms
 }
 //100ms delay to cause slight gap between letters
 delay(100);
 // 3 dits again
  for (int x=0; x<3; x++)
  {
  digitalWrite(ledPin, HIGH);
  delay(400); // waits for 400ms
  digitalWrite(ledPin, LOW);
  delay(100); // waits for 100ms
  }
  //100ms delay to cause slight gap between letters
  delay(100);
// 3 dits again
  for (int x=0; x<3; x++)
  {
  digitalWrite(ledPin, HIGH);
  delay(150); // waits for 150ms
  digitalWrite(ledPin, LOW);
  delay(100); // waits for 100ms
  }
  //100ms delay to cause slight gap between letters
  delay(5000);

}