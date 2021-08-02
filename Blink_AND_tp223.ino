/* Attiny412 programming using Arduino
 * http://www.technoblogy.com/show?2OCH
 */
 
int Touch_Sensor = 2;    //PA1 (Pin 4)
int led = 0;             //PA6 (Pin 2)
int condition = 0;
int state = 0;           //To hold the switch state.

void setup() {
  // initialize the digital pin as an input/output.
  pinMode(led, OUTPUT);
  pinMode(Touch_Sensor, INPUT);
}

void loop() {
/*  digitalWrite(led, HIGH);   // turn the LED off (HIGH is the voltage level)
  delay(1000);               // wait for a second
  digitalWrite(led, LOW);    // turn the LED on by making the voltage LOW
  delay(1000);               // wait for a second
*/
  condition = digitalRead(Touch_Sensor);
  delay(10); // de-bounce delay.
  
    if(condition == 1){
      digitalWrite(led, LOW);
    }
      
      else {
        digitalWrite(led, HIGH);
        }
    
}
