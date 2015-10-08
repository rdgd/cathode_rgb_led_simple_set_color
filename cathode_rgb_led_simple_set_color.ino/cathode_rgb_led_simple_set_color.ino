const int redLEDPin = 11;
const int greenLEDPin = 9;
const int blueLEDPin = 10;

int redValue = 255;
int greenValue = 255;
int blueValue = 255;
  
void setup() {
  Serial.begin(9600);

  pinMode(greenLEDPin, OUTPUT);
  pinMode(redLEDPin, OUTPUT);
  pinMode(blueLEDPin, OUTPUT);
}

void loop() {
  analogWrite(redLEDPin, redValue);
  analogWrite(greenLEDPin, greenValue);
  analogWrite(blueLEDPin, blueValue);
}
