int ledMerah = D3;
int ledBiru = D2;

void setup() {
  Serial.begin(9600);
  pinMode(ledMerah, OUTPUT);
  pinMode(ledBiru, OUTPUT);
}

void loop() {
  // led merah nyala, led biru mati
  digitalWrite(ledMerah, HIGH);
  digitalWrite(ledBiru, LOW);
  Serial.println("LED Merah Menyala");
  Serial.println("LED Biru Mati");
  Serial.println("----------");
  delay(1000);
  
  // led merah nyala, led biru mati
  digitalWrite(ledMerah, LOW);
  digitalWrite(ledBiru, HIGH);
  Serial.println("LED Merah Mati");
  Serial.println("LED Biru Menyala");
  Serial.println("----------");
  delay(1000);
}
