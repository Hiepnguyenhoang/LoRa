#include <SPI.h>
#include <LoRa.h>

int counter = 0;

unsigned long startTime = 0;
unsigned long endTime = 0;
void setup() {
  Serial.begin(9600);
  while (!Serial);
  Serial.println("LoRa Sender");
  if (!LoRa.begin(433E6)) { //433E6, 868E6, 915E6
    Serial.println("Starting LoRa failed!");
    while(1) {}
  }
 
  // Set LoRa parameters
  LoRa.setTxPower(20);            // Set the transmission power (range: 2 - 20 dBm)
  LoRa.setSpreadingFactor(12);     // Set the spreading factor (range: 6 - 12)
  LoRa.setSignalBandwidth(125E3); // Set the signal bandwidth (range: 7.8E3 - 500E3 Hz)Y
  LoRa.setCodingRate4(5);         // Set the coding rate (range: 5 - 8)
  LoRa.setSyncWord(0x22);         // Set the sync word (0x12 is the default value)

  Serial.println("LoRa configuration done."); 
  }

void loop() {//nha hung
  
  Serial.print("Sending packet: ");
  Serial.println(counter);

  // send packet
  LoRa.beginPacket();
  
  startTime = millis();
  Serial.println("___________________"); // Starting counting for transmitting time
  LoRa.print("Thay_Hung_Dep_Trai_");
  
  
  int rssi = LoRa.rssi();
  Serial.print("Packet RSSI: ");
  Serial.println(rssi);

  LoRa.print(counter); 
  LoRa.endPacket();
  
  
  endTime = millis();
  unsigned long time = endTime - startTime;
  Serial.print("Time taken:            "); Serial.print(time); Serial.println(" ms");
  
  counter++;
  delay(3000);
}