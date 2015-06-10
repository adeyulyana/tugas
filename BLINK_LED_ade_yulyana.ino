/*
  Tugas Mapel Komputer Terapan "LED kedip - kedip berurutan"
  Nama     : Ade Yulyana
  Kelas    : XI TKJ 1
  No. Abs  : 02
 */

void setup() {
  //Sesuai dengan tugas saya mendapat pin awal 2, jadi :
  //saya akan membuat kedipan pin 2, 3 & 4
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
}

void loop() {
  digitalWrite(2, HIGH);   // LED 2 nyala
  delay(1500);              
  digitalWrite(2, LOW);    // LED 2 redup
  delay(1500);
  digitalWrite(3, HIGH);   // LED 3 nyala
  delay(1500);
  digitalWrite(3, LOW);    // LED 3 redup
  delay(1500);
  digitalWrite(4, HIGH);   // LED 4 nyala
  delay(1500);
  digitalWrite(4, LOW);    // LED 4 redup
  delay(1500);              
}
