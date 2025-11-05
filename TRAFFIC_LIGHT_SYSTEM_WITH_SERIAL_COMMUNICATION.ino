#define GREEN_LED 12 
#define BLUE_LED 11
#define RED_LED 10



void setup() {
  pinMode(GREEN_LED, OUTPUT); 
  pinMode(BLUE_LED, OUTPUT);
  pinMode(RED_LED, OUTPUT);
  Serial.begin(9600);
}


void loop() {

  digitalWrite(GREEN_LED, HIGH);
  Serial.println("GO!");
  delay(3000);
  digitalWrite(GREEN_LED, LOW);
  digitalWrite(BLUE_LED, HIGH);
  Serial.println("WAIT!");
  delay(1000);
  digitalWrite(BLUE_LED, LOW);
  digitalWrite(RED_LED, HIGH);
  Serial.println("STOP!");
  delay(3000);
  digitalWrite(RED_LED, LOW);
  
  
 
  

}
