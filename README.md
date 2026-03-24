# smart-lighting-system
Arduino-based automated lighting system with 5-second debounce logic
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
![z7648991340033_8d50ce85ab1ad60313e79e1567014072](https://github.com/user-attachments/assets/f2c9fa7b-63b0-478f-b727-c0f78c5e7b60)
<img width="1320" height="523" alt="smart-lighting-system" src="https://github.com/user-attachments/assets/7ba01b1e-0158-4664-844c-4c79a4c20c78" />
*Dự án thực hành Cơ điện tử nền tảng - Đại học Sư phạm Kỹ thuật TP.HCM (HCMUTE).*
