#define BLINK_DELAY 1000
#define BLINK_DELAY_2 500

void setup() {
  // put your setup code here, to run once:
  pinMode(13,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  delay(BLINK_DELAY);
  digitalWrite(13,HIGH);
  delay(BLINK_DELAY);
  digitalWrite(13,LOW);

  delay(BLINK_DELAY_2);
  digitalWrite(13,HIGH);
  delay(BLINK_DELAY_2);
  digitalWrite(13,LOW);
}
