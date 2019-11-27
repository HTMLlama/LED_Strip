// Control the brightness of an RGB LED strip with 3 potentiometers

const int RED = 3;
const int GREEN = 6;
const int BLUE = 9;

const int RED_KNOB = A1;
const int GREEN_KNOB = A3;
const int BLUE_KNOB = A5;

int rBgt = 0;
int gBgt = 0;
int bBgt = 0;

void setup() {
  pinMode(RED, OUTPUT);
  pinMode(GREEN, OUTPUT);
  pinMode(BLUE, OUTPUT);

  pinMode(RED_KNOB, INPUT);
  pinMode(GREEN_KNOB, INPUT);
  pinMode(BLUE_KNOB, INPUT);
}

void loop() {
  rBgt = map(analogRead(RED_KNOB), 0, 1100, 0, 254);
  gBgt = map(analogRead(GREEN_KNOB), 0, 1100, 0, 254);
  bBgt = map(analogRead(BLUE_KNOB), 0, 1100, 0, 254);

  analogWrite(RED, rBgt);
  analogWrite(GREEN, gBgt);
  analogWrite(BLUE, bBgt);
}
