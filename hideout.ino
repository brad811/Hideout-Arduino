int const potPinLeft = A1,
  potPinMiddle = A3,
  potPinRight = A5;

int potValLeft,
  potValMiddle,
  potValRight;

int const LEDPinLeft = 6,
  LEDPinMiddle = 5,
  LEDPinRight = 3;

int brightnessLeft,
  brightnessMiddle,
  brightnessRight;

void setup() {
  Serial.begin(9600);
  
  pinMode(LEDPinLeft, OUTPUT);
  pinMode(LEDPinMiddle, OUTPUT);
  pinMode(LEDPinRight, OUTPUT);
}

void loop() {
  potValLeft = analogRead(potPinLeft);
  potValLeft = analogRead(potPinLeft);
  
  potValMiddle = analogRead(potPinMiddle);
  potValMiddle = analogRead(potPinMiddle);
  
  potValRight = analogRead(potPinRight);
  potValRight = analogRead(potPinRight);
  
  brightnessLeft = potValLeft/4;
  brightnessMiddle = potValMiddle/4;
  brightnessRight = potValRight/4;
  
  analogWrite(LEDPinLeft, brightnessLeft);
  analogWrite(LEDPinMiddle, brightnessMiddle);
  analogWrite(LEDPinRight, brightnessRight);

  Serial.println(
    "pot: ("+
      String(potValLeft)+","+
      String(potValMiddle)+","+
      String(potValRight)+
    "), bright: ("+
      String(brightnessLeft)+","+
      String(brightnessMiddle)+","+
      String(brightnessRight)+
    ")"
  );
  
  delay(15);
}
