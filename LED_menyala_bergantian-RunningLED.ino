//program variasi LED oleh Indobot.co.id
int LED[]={D0,D1,D2,D3};

void setup() {
  //program ini berfungsi sebagai inisialisasi
  //LED pin menggunakan pin 0,1,2,dan 3
  for(int i = 0; i <= 3; i++){
  pinMode(LED[i], OUTPUT);
  }
}

void loop() {
  //program untuk menyalakan LED bergantian
  for (int i = 0; i <= 3; i++){
  //LED akan menyala dan mati sesuai urutan dari pin 0
  //hingga pin 3

  digitalWrite(LED[i], HIGH);
  delay(1000);
  digitalWrite(LED[i], LOW);
  }
}
