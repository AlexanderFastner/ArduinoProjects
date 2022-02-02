#define led 3
#define pot 0

void setup (){
  
  pinMode(led, OUTPUT);
  Serial.begin(9600);
}

void loop () {
  
  int v = analogRead(pot);
  v = map(v , 1, 1024, 1, 255);
  analogWrite(led, v);
  delay(10);
  Serial.println(v);
  
}
