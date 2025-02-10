// Define pinos
#define SHT_QRE_R 12
#define SHT_QRE_L 14

void setup_QREs(){
  Serial.begin(115200);
  pinMode(SHT_QRE_R, INPUT);
  pinMode(SHT_QRE_L, INPUT);    
}

void setup() {
  // put your setup code here, to run once:
  setup_QREs();
}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.printf("QRE_R: %u | QRE_L: %u\n", analogRead(SHT_QRE_R), analogRead(SHT_QRE_L));
  delay(500);
}
