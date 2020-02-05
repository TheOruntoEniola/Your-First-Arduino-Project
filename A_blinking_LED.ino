/* Written By Eniola Orunto for a tutorial session 
 * on 29/01/2020. Feel free to share */
 
int Yellow_LED = 5; //Declaring the LED's pin (No 5) on the arduino

void setup() {
  // put your setup code here, to run once:
  pinMode(Yellow_LED, OUTPUT) ;
  /*Declaring that the pin would be sending out signals 
   rather than recieving since its a bulb*/
  
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(Yellow_LED, HIGH); //LED on
  delay (1000); // Delay for 1000 milliseconds (i.e a second)
  digitalWrite(Yellow_LED, LOW); LED off
  delay (1000);
}
