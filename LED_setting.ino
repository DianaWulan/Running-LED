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
  //mengatur nyala 4 LED dengan mengubah nilai 0 dan 1
  setLED(1,0,1,0);
  setLED(0,1,0,1);
  setLED(1,1,1,1);
  setLED(0,0,0,0);
}
  //function untuk menentukan LED mati atau menyala
  int setLED (int nilai1, int nilai2, int nilai3, int nilai4) {
  digitalWrite(LED[0], nilai1);
  digitalWrite(LED[1], nilai2);
  digitalWrite(LED[2], nilai3);
  digitalWrite(LED[3], nilai4);
  delay(1000);
}
