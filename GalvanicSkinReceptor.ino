// GSR sensor SVriables
float sensorPin = 0; // select the input pin for the GSR
float SV1 = 0;
float SV2 = 0;
float SV3 = 0;
float SV4 = 0;
float SV5 = 0;
float SV6 = 0;
float SV7 = 0;
float SV8 = 0;
int buzz = 12;
float C = 3;
// SVriable to store the SVlue coming from the sensor

float voltage;
// Time SVriables
unsigned long time;
float secForGSR;
float curMillisForGSR;
float preMillisForGSR;

void setup() {
// Prepare serial port
Serial.begin(9600);
secForGSR = 0.125; // How often do we get a GSR reading
curMillisForGSR = 0;
preMillisForGSR = -1;
}
void loop() {
  /*digitalWrite(buzz, HIGH);
     digitalWrite(3, HIGH);
     delay(1000);
     digitalWrite(3, LOW);
     delay(1000);*/
float maximum = 0;
float minimum = 1290;
//time = millis();
//digitalWrite(12, HIGH);
 //SV1 = analogRead(A0);
// curMillisForGSR = time / (secForGSR * 1000);
//if(curMillisForGSR != preMillisForGSR) {
// Read GSR sensor and send over Serial port
SV1 = analogRead(sensorPin);
Serial.print("SV1 == ");
Serial.println(SV1);
delay(SV2);
SV2 = analogRead(sensorPin);
Serial.print("SV2 == "); Serial.print("    TEST SV2 - SV1 == "); Serial.print(SV2 - SV1); Serial.print("  And SV2 == ");
Serial.println(SV2);
if((SV2 - SV1) >= 1) {
  digitalWrite(3, HIGH); digitalWrite(12, HIGH);}
  delay(SV2); digitalWrite(3, LOW);
delay(SV3);   digitalWrite(12, LOW);
SV3 = analogRead(sensorPin);
Serial.print("SV3 == ");
Serial.println(SV3);
if((SV3 - SV2) >= 1) {
  digitalWrite(3, HIGH);  digitalWrite(12, HIGH);}
  delay(SV3); digitalWrite(3, LOW);
delay(SV4);   digitalWrite(12, LOW);
SV4 = analogRead(sensorPin);
Serial.print("SV4 == ");
Serial.println(SV4);
if((SV4 - SV3) >= 1) {
  digitalWrite(3, HIGH);  digitalWrite(12, HIGH);}
  delay(SV4); digitalWrite(3, LOW);
delay(SV5);   digitalWrite(12, LOW);
SV5 = analogRead(sensorPin);
Serial.print("SV5 == ");
Serial.println(SV5);
if((SV5 - SV4) >= 1) {
  digitalWrite(3, HIGH);  digitalWrite(12, HIGH);}
  delay(SV4); digitalWrite(3, LOW);
delay(SV5);   digitalWrite(12, LOW);
SV6 = analogRead(sensorPin);
Serial.print("SV6 == ");
Serial.println(SV6);
if(((SV6 - SV5)) >= 1) {
  digitalWrite(3, HIGH); digitalWrite(12, HIGH);}
  delay(SV5); digitalWrite(3, LOW);
delay(SV6);   digitalWrite(12, LOW);
SV7 = analogRead(sensorPin);
Serial.print("SV7 == ");
Serial.println(SV7);
if(((SV7 - SV6)) >= 1) {
  digitalWrite(3, HIGH); digitalWrite(12, HIGH);}
  delay(SV6); 
  digitalWrite(3, LOW);
  digitalWrite(12, LOW);
delay(SV7);
SV8 = analogRead(sensorPin);
Serial.print("SV8 == ");
Serial.println(SV8);
if(((SV8 - SV7)) >= 1) {
  digitalWrite(3, HIGH); digitalWrite(12, HIGH);}
  delay(SV6); digitalWrite(3, LOW);
delay(SV7); digitalWrite(12, LOW);

digitalWrite(3, LOW);

//preMillisForGSR = curMillisForGSR;
  /*Convert the analog reading (which goes from 0 - 1023) to a voltage (0 - 5V):
   print out the SVlue you read:*/
   //delay(200);
   
   /*if ((SV2-SV1) > 0){
     digitalWrite(buzz, HIGH);
     digitalWrite(3, HIGH);
   delay(1000);
     }
   
 if(SV8 > maximum){
    maximum = SV8;}
  if(SV1 < minimum){
    minimum = SV1;}
  if(SV2 < minimum){
    minimum = SV2;}
  if(SV3 < minimum){
    minimum = SV3;}
  if(SV4 < minimum){
    minimum = SV4;}
  if(SV5 < minimum){
    minimum = SV5;}
  if(SV6 < minimum){
    minimum = SV6;}
  if(SV7 < minimum){
    minimum = SV7;}
  if(SV8 < minimum){
    minimum = SV8;}
   
  SV7 = SV8;
  float SVD78 = (SV8-SV7)/secForGSR;
  if(SV7 > maximum){
    maximum = SV7;}
    
  SV6 = SV7;
  float SVD67 = (SV7-SV6)/secForGSR;
  if(SV6 > maximum){
    maximum = SV6;}
    
  SV2 = SV3;
  float SVD23 = (SV3-SV2)/secForGSR;
  if(SV2 > maximum){
    maximum = SV2;}

  SV3 = SV4;
  float SVD34 = (SV4-SV3)/secForGSR;
  if(SV3 > maximum){
    maximum = SV3;}

  SV4 = SV5;
  float SVD45 = (SV5-SV4)/secForGSR;
  if(SV4 > maximum){
    maximum = SV4;}

  SV5 = SV6;
  float SVD56 = (SV6-SV5)/secForGSR;
  if(SV5 > maximum){
    maximum = SV5;}

  SV1 = SV2;
  float SVD12 = (SV2-SV1)/secForGSR;
  if(SV1 > maximum){
    maximum = SV1;}

  digitalWrite(3, LOW);
  delay(1000);

  float voltage = ((SV1 + SV2 + SV3 + SV4 + SV5 + SV6 + SV7 + SV8 + (3*maximum) + (3*minimum)) / 14);
  Serial.println(voltage);*/
  
  
}
