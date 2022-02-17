/*

*/

void setup() {
 pinMode(8, OUTPUT);
 pinMode(7, OUTPUT);
 
 
 
//start of green light
  digitalWrite(8, HIGH);
  delay(200);
  digitalWrite(8, LOW);
  delay(200);
  digitalWrite(8, HIGH);
  delay(200);
  digitalWrite(8, LOW);
  delay(200);
// 1 second delay
  delay(1000);
//start of blue light
  digitalWrite(7, HIGH);
  delay(200);
  digitalWrite(7, LOW);
  delay(200);
  digitalWrite(7, HIGH);
  delay(200);
  digitalWrite(7, LOW);
  // 3 second pause
  delay(3000);
  


}

void loop() {
digitalWrite(8, HIGH);
delay(650);
digitalWrite(8, LOW);
digitalWrite(7, HIGH);
delay(650);
digitalWrite(7, LOW);
  
  
  
  
  
}
