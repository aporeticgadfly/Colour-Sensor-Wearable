int redFrequency = 0;
int greenFrequency = 0;
int blueFrequency = 0;
byte r = 0;
byte g = 0;
byte b = 0;
boolean VTSwitch = 0;
boolean XX = 0;

void setup() {
  pinMode(2, OUTPUT); //S0
  pinMode(3, OUTPUT);  //S1
  pinMode(4, OUTPUT); //S2
  pinMode(5, OUTPUT); //S3
  pinMode(6, INPUT); //output of RGB
  pinMode(7, INPUT);  //tactile/visual switch
  pinMode(9, OUTPUT); //transistor that controls vibratory motor
  pinMode(10, OUTPUT);  //BLACK LED
  pinMode(11, OUTPUT);  //WHITE LED
  pinMode(12, OUTPUT);  //RED LED
  pinMode(13, OUTPUT);  //ORANGE LED
  pinMode(A0, OUTPUT);  //YELLOW LED
  pinMode(A1, OUTPUT);  //GREEN LED
  pinMode(A2, OUTPUT);  //CYAN LED
  pinMode(A3, OUTPUT);  //BLUE LED
  pinMode(A4, OUTPUT);  //PURPLE LED
  pinMode(A5, OUTPUT);  //MAGENTA/PINK LED
  
  //frequency at 20%
  digitalWrite(2, HIGH);
  digitalWrite(3, LOW);
  
  Serial.begin(9600);
  
}

void loop() {
  //reads what state the visual/tactile switch is in
  VTSwitch = digitalRead(7);
  
  //setting red filtered photodiodes to be read
  digitalWrite(4, LOW);
  digitalWrite(5, LOW);
  //Reading the output frequency
  redFrequency = pulseIn(6, LOW);
  //remapping value of red frequency from 0 to 255
  //XX denotes empirically tested signals, must be filled in manually
  r = map(redFrequency, XX, XX, 255, 0);
  
  //setting green filtered photodiodes to be read
  digitalWrite(4, HIGH);
  digitalWrite(5, HIGH);
  
  greenFrequency=pulseIn(6, LOW);
  
  g = map(greenFrequency, XX, XX, 255, 0);
  
  //Setting blue filtered photodiodes to be read
  digitalWrite(4, LOW);
  digitalWrite(5, HIGH);
  
  blueFrequency = pulseIn(6, LOW);
  
  b = map(blueFrequency, XX, XX, 255, 0);
  
  Serial.print("RF= ");
  Serial.print(redFrequency);
  Serial.print("  ");
  delay(100);
  Serial.print("GF= ");
  Serial.print(greenFrequency);
  Serial.print("  ");
  delay(100);
  Serial.print("BF= ");
  Serial.print(blueFrequency);
  Serial.print("  ");
  delay(100);
  
  Serial.print("R= ");
  Serial.print(r);
  Serial.print("  ");
  delay(100);
  Serial.print("G= ");
  Serial.print(g);
  Serial.print("  ");
  delay(100);
  Serial.print("B= ");
  Serial.print(b);
  Serial.print("  ");
  delay(100);
  
  void VisualMode() {
    
    //Note: conditions for if statements are determined based on the empirically tested values of r, g, and b, due to the variance in the construction of the sensor used. 
    //This allows for the most accurate readings. If one wishes to not test values empirically, one can refer to the RGB combinations in the colour wheel diagram.
    
    if() {
      digitalWrite(10, HIGH);
      delay(100);
      digitalWrite(10, LOW);
    }
    else if() {
      digitalWrite(11, HIGH);
      delay(100);
      digitalWrite(11, LOW);
    }
    else if() {
      digitalWrite(12, HIGH);
      delay(100);
      digitalWrite(12, LOW);
    }
    else if() {
      digitalWrite(13, HIGH);
      delay(100);
      digitalWrite(13, LOW);
    }
    else if() {
      digitalWrite(A0, HIGH);
      delay(100);
      digitalWrite(A0, LOW);
    }
    else if() {
      digitalWrite(A1, HIGH);
      delay(100);
      digitalWrite(A1, LOW);
    }
    else if() {
      digitalWrite(A2, HIGH);
      delay(100);
      digitalWrite(A2, LOW);
    }
    else if() {
      digitalWrite(A3, HIGH);
      delay(100);
      digitalWrite(A3, LOW);
    }
    else if() {
      digitalWrite(A4, HIGH);
      delay(100);
      digitalWrite(A4, LOW);
    }
    else if() {
      digitalWrite(A5, HIGH);
      delay(100);
      digitalWrite(A5, LOW);
    }
  }
  
  //Rather than just buzzing in a sequentially longer amount of times, one can easily change to distinct patterns of similar lengths to encode for different colours. However, this is simpler and does not require the user to memorize difficult patterns.
  void TactileMode() {
    if() {
      vibrate();
    }
    else if() {
      vibrate();
      vibrate();
    }
    else if() {
      vibrate();
      vibrate();
      vibrate();
    }
    else if() {
      vibrate();
      vibrate();
      vibrate();
      vibrate();
    }
    else if() {
      vibrate();
      vibrate();
      vibrate();
      vibrate();
      vibrate();
    }
    else if() {
      vibrate();
      vibrate();
      vibrate();
      vibrate();
      vibrate();
      vibrate();
    }
    else if() {
      vibrate();
      vibrate();
      vibrate();
      vibrate();
      vibrate();
      vibrate();
      vibrate();
    }
    else if() {
      vibrate();
      vibrate();
      vibrate();
      vibrate();
      vibrate();
      vibrate();
      vibrate();
      vibrate();
    }
    else if() {
      vibrate();
      vibrate();
      vibrate();
      vibrate();
      vibrate();
      vibrate();
      vibrate();
      vibrate();
      vibrate();
    }
    else if() {
      vibrate();
      vibrate();
      vibrate();
      vibrate();
      vibrate();
      vibrate();
      vibrate();
      vibrate();
      vibrate();
      vibrate();
    }
  }
  
  void vibrate() {
    digitalWrite(9, HIGH);
    delay(100);
    digitalWrite(9, LOW);
    delay(100);
  }
  
  if(VTSwitch == LOW)
  {
    VisualMode();
  }
  
  else if(VTSwitch == HIGH)
  {
    TactileMode();
  }
  
  
}

    
