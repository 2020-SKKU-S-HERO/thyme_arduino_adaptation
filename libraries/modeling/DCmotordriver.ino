int left = 13;
int right = 12;

void setup() {
  pinMode(left, OUTPUT);
  pinMode(right, OUTPUT);
  Serial.begin(9600);
    
}

void loop() {
  if(Serial.available())
  {
    char in_data;
    in_data = Serial.read();
    if(in_data == '1')
    {
      analogWrite(left, 100);
      digitalWrite(right, LOW);
      Serial.println("left");
    }
    else if(in_data == '2')
    {
      digitalWrite(left, LOW);
      digitalWrite(right, HIGH);
      Serial.println("right");

    }
    else if(in_data == '3')
    {
      digitalWrite(left, LOW);
      digitalWrite(right, LOW);
      Serial.println("stop");
    }
    else if(in_data == '4')
    {
      digitalWrite(left, HIGH);
      digitalWrite(right, LOW);
      Serial.println("right");

    }
  } 
}
