# smart-lighting-system
Arduino-based automated lighting system with 5-second debounce logic
# Smart Automated Lighting System

## Overview
Dự án mô phỏng hệ thống chiếu sáng tự động thông minh. Hệ thống tự động nhận diện cường độ ánh sáng môi trường để điều khiển bật/tắt thiết bị điện công suất lớn thông qua Rơ-le.

## Hardware Stack
* Arduino Uno R3
* Quang trở & IC LM393 (LDR Light Sensor Module)
* Module Relay 5V (Active HIGH - High Level Trigger)
* Breadboard & Đèn LED báo hiệu

## Key Technical Features
* Electrical Isolation: Sử dụng Rơ-le để tách biệt hoàn toàn mạch điều khiển (5V) và mạch tải, chống chập cháy ngược.
* Thuật toán Chống nhiễu (Debounce Logic): Xây dựng thuật toán trì hoãn 5 giây để lọc nhiễu ánh sáng (ví dụ: đèn pha xe máy lướt qua) giúp Rơ-le hoạt động ổn định, tránh hiện tượng bật/tắt liên tục.

## Wiring & Setup
![z7648991340033_8d50ce85ab1ad60313e79e1567014072](https://github.com/user-attachments/assets/f2c9fa7b-63b0-478f-b727-c0f78c5e7b60)
