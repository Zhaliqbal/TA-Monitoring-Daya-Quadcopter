#define emitdiode 12

unsigned long jeda = 2000;

void_setup(){
  pinMode(emitdiode, OUTPUT);
  digitalWrite(emitdiode, LOW);
}

void_loop(){
  digitalWrite(emitdiode, HIGH);
  delay(jeda);
  digitalWrite(emitdiode, LOW);
  delay(jeda);
}
