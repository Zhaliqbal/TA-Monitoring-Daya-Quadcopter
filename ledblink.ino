#define emitdiode 12

unsigned long jeda = 2500;
unsigned long jedar = 1500;
int hitungan = 0;

void_setup(){
  Serial.begin(9600);
  pinMode(emitdiode, OUTPUT);
  digitalWrite(emitdiode, LOW);
}

void_loop(){
  Serial.println(hitungan);
  digitalWrite(emitdiode, HIGH);
  delay(jeda);
  digitalWrite(emitdiode, LOW);
  delay(jeda);
  //Setelah ini, jeda kedipan LED semakin cepat 
  digitalWrite(emitdiode, HIGH);
  delay(jedar);
  digitalWrite(emitdiode, LOW);
  delay(jedar);
  hitungan++;
}
