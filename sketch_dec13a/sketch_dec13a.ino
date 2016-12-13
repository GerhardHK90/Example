#define BLINK_DELAY 1000

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
}
