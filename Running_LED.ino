// Lampu LED Berjalan Menggunakan Wemos D1 R1 UNO
// Menyalakan LED dengan Aktif HIGH
int led1 = D0;
int led2 = D1;
int led3 = D2;
int led4 = D3;

void setup()
{
  Serial.begin(9600);
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  //pinMode(led3, OUTPUT);
  //pinMode(led4, OUTPUT);
// menjadikan PIN 0, 1, 2, dan 3 sebagai OUTPUT
}

void loop()
{
  //menyala secara bergilir
  digitalWrite(led1, HIGH);
  digitalWrite(led2, LOW);
  digitalWrite(led3, LOW);
  digitalWrite(led4, LOW);
  Serial.print("led merah menyala");
  delay(2000);
  
  digitalWrite(led1, LOW);
  digitalWrite(led2, HIGH);
  digitalWrite(led3, LOW);
  digitalWrite(led4, LOW);
  Serial.print("led kuning menyala");
  delay(2000);
  /*
  digitalWrite(D0, LOW);
  digitalWrite(D1, LOW);
  digitalWrite(D2, HIGH);
  digitalWrite(D3, LOW);
  Serial.println("led hijau menyala");
  delay(2000);
  
  digitalWrite(D0, LOW);
  digitalWrite(D1, LOW);
  digitalWrite(D2, LOW);
  digitalWrite(D3, HIGH);
  Serial.println("led biru menyala");
  delay(2000);*/
}
