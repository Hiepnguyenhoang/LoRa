#include <SPI.h>
#include <LoRa.h>

void setup() {
  Serial.begin(9600);
  while (!Serial);

  Serial.println("LoRa Receiver");
  if (!LoRa.begin(433E6)) {
    Serial.println("Starting LoRa failed!");
    while (1);
  }
  // Set LoRa parameters
  LoRa.setSpreadingFactor(12);     // Set the spreading factor (range: 6 - 12)
  LoRa.setSignalBandwidth(125E3); // Set the signal bandwidth (range: 7.8E3 - 500E3 Hz)Y
  LoRa.setCodingRate4(5);         // Set the coding rate (range: 5 - 8)
  LoRa.setSyncWord(0x22);         // Set the sync word (0x12 is the default value)

  Serial.println("LoRa configuration done.");
}

void loop() {
  // try to parse packet
  int packetSize = LoRa.parsePacket();
  if (packetSize) {
    // received a packet
//    Serial.print("Received packet '");
//
//    // read packet
//    while (LoRa.available()) {
//      Serial.print((char)LoRa.read());
//    }
    String receivedMessage = "";
    while (LoRa.available()) {
      receivedMessage += (char)LoRa.read();
    }
    Serial.println("----------Received: " + receivedMessage);
    // print RSSI of packet
    Serial.print("' with RSSI ");
    Serial.println(LoRa.packetRssi());
    Serial.print("' with SNR ");
    Serial.println(LoRa.packetSnr());
    Serial.print("' with Frequency Error ");
    Serial.println(LoRa.packetFrequencyError());
  }
}