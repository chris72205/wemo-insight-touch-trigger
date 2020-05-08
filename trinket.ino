unsigned long lastTouch;
int touchPin = 2;
int ledPin = 3;

void setup() {
  pinMode(touchPin, OUTPUT); // pin 1 triggers the touch sensor
  pinMode(ledPin, INPUT);  // pin 3 reads the power LED light value
  lastTouch = millis();

  delay(30000); // delay for 30 seconds to give Insight a chance to boot up all the way
}

void loop() {
  if(millis() < lastTouch) {
    // millis has overflowed, let's update lastTouch and wait for 15 seconds
    lastTouch = millis();
    delay(15000);
  }
  
  // check if it's been at least 15 seconds since we last tried to trigger a touch
  if(millis() - 15000 > lastTouch) {
    int ledValue = digitalRead(ledPin);
    if(ledValue == HIGH) { // led is off
      // trigger touch press
      digitalWrite(touchPin, HIGH);
  
      // wait briefly
      delay(50);
  
      // trigger touch lift
      digitalWrite(touchPin, LOW);

      lastTouch = millis();
    }
  }
}
