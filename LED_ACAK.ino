//program variasi LED oleh Indobot.co.id
int LED[] = {D0,D1,D2,D3};

void setup() {
  //inisialisasi LED pin 0,1,2 dan 3 adalah output
  pinMode(LED[0], OUTPUT);
  pinMode(LED[1], OUTPUT);
  pinMode(LED[2], OUTPUT);
  pinMode(LED[3], OUTPUT);

}
void loop() {
  //menambahkan nilai untuk array/ LED[]
  int pin;
  //memilih angka acak sesuai array
  pin = random(4);
  //program untuk menyalakan dan mematikan LED
  digitalWrite(LED[pin], HIGH);
  delay(100);
  digitalWrite(LED[pin], LOW);
}
