// Define connected pin numbers
const int irSensor1 = 8;
const int irSensor2 = 9;
const int redLED = 12;
const int yellowLED = 13;

void setup() {
  // Set sensor pins as input
  pinMode(irSensor1, INPUT);
  pinMode(irSensor2, INPUT);

  // Set LED pins as output
  pinMode(redLED, OUTPUT);
  pinMode(yellowLED, OUTPUT);
}

void loop() {
  // Read infrared sensor values
  int sensor1State = digitalRead(irSensor1);
  int sensor2State = digitalRead(irSensor2);

  // Control LEDs based on sensor input
  digitalWrite(redLED, sensor1State == HIGH ? HIGH : LOW);
  digitalWrite(yellowLED, sensor2State == HIGH ? HIGH : LOW);
}