# KIỂM NGHIỆM VÀ TỐI ĐA HÓA KHẢ NĂNG TRUYỀN THÔNG CỦA LPWA LORA

Sản phẩm được xây dựng bởi nhóm 4 thành viên:
- Nguyễn Hoàng Hiệp
- Lê Hoàng Long
- Lê Đức Anh
- Lương Ngọc Phương

## Mục tiêu project

Kiểm nghiệm và tối đa hóa khả năng truyền thông của chuẩn truyền thông LoRaWAN sử dụng trong các hệ thống nhúng trong các điều kiện môi trường thực tế khác nhau: truyền thẳng (truyền không vật cản), truyền qua tán cây, truyền qua trời mưa, truyền có vật cản là tường hoặc nhà ở…
- Đo tại các môi trường với các thông số khác nhau: Trong bài tập này, nhóm sẽ đo tại 2 thông số là thông số mặc định và thông số đạt hiệu suất tối đa nhằm thu được khoảng cách truyền xa nhất, cụ thể hơn sẽ được trình bày trong chương 3.
- Đo đạc nhiều lần, ghi lại các thông số đầu ra thông qua file text nhằm dễ đánh giá, so sánh các thông số.
- Đánh giá, so sánh các thông số đầu ra tại các môi trường: Khoảng cách, SNR, RSSI, mức độ lỗi bit,…

## Phần cứng yêu cầu
- Arduino Uno R3: 2 cái
- Module LoRa Thu Phát RF LoRa SX1278 433Mhz Ra-02: 2 cái
- Anten 433Mhz 12dB Đầu SMA Male: 2 cái
- Cáp Ipex To SMA Cái: 2 cái

## Sơ đồ nối chân
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

## Kịch bản đo
- Truyền thẳng (truyền không vật cản): Đo tại 2 bên bờ của Hồ Tây
- Truyền qua tán cây: Bên truyền sẽ truyền từ trên nóc nhà cao tầng xuống bên nhận ở dưới tán cây
- Truyền có vật cản là tường hoặc nhà ở: Đo thông qua các tầng tại khu nhà chung cư Nhà Xinh – Yên Hòa, Hà Nội








