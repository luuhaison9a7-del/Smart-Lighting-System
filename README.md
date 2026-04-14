# Smart-Linghting-System
Hệ thống chiếu sáng tự động dựa trên Arduino với thuật toán lọc nhiễu 5 giây

# Smart Automated Lighting System

## Overview
Dự án mô phỏng và chế tạo hệ thống chiếu sáng tự động có khả năng lọc nhiễu, ứng dụng nền tảng vi điều khiển Arduino. Hệ thống có khả năng liên tục giám sát cường độ ánh sáng môi trường để điều khiển đóng/ngắt các thiết bị điện công suất lớn.

## Hardware Stack
* Arduino Uno R3
* LDR Light Sensor Module
* Module Relay 5V (Active High - High Level Trigger)
* Breadboard & LED 
* Jumper wires

## Key Technical Features
* Electrical Isolation: Sử dụng Rơ-le để tách biệt hoàn toàn mạch điều khiển (5V) và mạch tải, chống chập cháy ngược.
* Thuật toán Chống nhiễu (Debounce Logic): Xây dựng thuật toán trì hoãn 5 giây để lọc nhiễu ánh sáng (ví dụ: đèn pha xe máy lướt qua) giúp Rơ-le hoạt động ổn định, tránh hiện tượng bật/tắt liên tục.

## Wiring & Setup
<img width="2560" height="1920" alt="Wiring   Setup PNG" src="https://github.com/user-attachments/assets/fdb80c48-0a02-4ce5-989a-f407005cb16e" />
<img width="1352" height="520" alt="smart-lighting-system(1)" src="https://github.com/user-attachments/assets/025db8b5-6994-4f8f-a719-61b432868f6e" />
*Dự án thực hành Cơ điện tử nền tảng - Đại học Sư phạm Kỹ thuật TP.HCM (HCMUTE) (23/03/2026).* 
