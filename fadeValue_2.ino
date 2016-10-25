void setup() {
  // put your setup code here, to run once:

  pinMode(6, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(11, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:

  for (int fadeValue = 0; fadeValue <= 255; fadeValue +=5) {
    int r = map(fadeValue, 0, 255, 255, 0);

    analogWrite(6, fadeValue);
    analogWrite(9, r);
    delay(100);// only one delay after the action we want to program!! if it is between, it will effect the transition of the light intensity (from 0 to 100%)
  }


    for (int fadeValue = 0; fadeValue <= 255; fadeValue +=5) {
    int r = map(fadeValue, 0, 255, 255, 0);

    analogWrite(6, r);
    analogWrite(10, fadeValue);
    delay(100);
  }

      for (int fadeValue = 0; fadeValue <= 255; fadeValue +=5) {
    int r = map(fadeValue, 0, 255, 255, 0);

    analogWrite(10, r);
    analogWrite(11, fadeValue);
    delay(100);
  }

        for (int fadeValue = 0; fadeValue <= 255; fadeValue +=5) {
    int r = map(fadeValue, 0, 255, 255, 0);

    analogWrite(11, r);
    analogWrite(9, fadeValue);
    delay(100);
  }

}
