# TESTING AND MAXIMIZING THE COMMUNICATION CAPABILITIES OF LPWA LORA

This project is developed by a team has four members
- Nguyễn Hoàng Hiệp
- Lê Hoàng Long
- Lê Đức Anh
- Lương Ngọc Phương

## Objective

Test and Maximize the communication capabilities of the LoRaWAN protocol used Arduino under different real-world conditions: straight transmission (no obstacles), transmission through tree canopies, rain, and obstacles such as walls or buildings.

## Measurements method

- Measurements under different conditions and different configurations (default settings and optimized settings) for maximum efficiency — to obtain the farthest communication range.
- Multiple measurements: Data will be recorded multiple times, and results will be logged into text files for easy evaluation and comparison.
- Evaluate and comparison parameters such as distance, SNR, RSSI, and bit error rates under different environmental conditions.

## Hardware Requirements
- Arduino Uno R3: 2 units
- LoRa SX1278 433Mhz Ra-02: 2 units
- Anten 433Mhz 12dB: 2 units 
- SMA Male Connector: 2 units
- Ipex to SMA Female Cable: 2 units

## Connections
| Module LoRa | Arduino Uno R3 |
|-------------|----------------|
| VCC         | 3.3V           |
| GND         | GND            |
| RST         | 9              |
| DIO0        | 2              |
| NSS         | 10             |
| MOSI        | 11             |
| MISO        | 12             |
| SCK         | 13             |

## Measurement Scenarios
- Straight transmission: Measurement across both sides of West Lake (Hồ Tây)
- Transmission through tree canopies: The transmitter will be placed on top of a high-rise building while the receiver is under the tree canopy.
- Transmission with obstacles such as walls or buildings: Measurements will be taken across different floors of Nhà Xinh residential complex in Yên Hòa, Hanoi.








