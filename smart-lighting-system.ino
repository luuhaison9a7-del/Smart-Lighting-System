int sensorPin = 2; 
int relayPin = 3;    
int lightState = LOW; 

void setup() {
  pinMode(sensorPin, INPUT);
  pinMode(relayPin, OUTPUT);
  digitalWrite(relayPin, lightState); 
  
  // 1. Mở khung chat với máy tính ở tốc độ 9600 baud
  Serial.begin(9600); 
  Serial.println("He thong da khoi dong. Dang giam sat an ninh...");
}

void loop() {
  int tin_hieu = digitalRead(sensorPin);

  // 2. Liên tục nhắn tin báo cáo tình hình cảm biến (1 là Tối, 0 là Sáng)
  Serial.print("Gia tri cam bien hien tai la: ");
  Serial.println(tin_hieu);
  
  // KỊCH BẢN 1: Đèn ĐANG TẮT mà trời bỗng nhiên TỐI
  if (lightState == LOW && tin_hieu == HIGH) {
    Serial.println("CẢNH BÁO: Phát hiện trời tối! Đang chờ 5 giây để xác nhận...");
    delay(5000); 
    
    if (digitalRead(sensorPin) == HIGH) { 
      lightState = HIGH; 
      digitalWrite(relayPin, lightState); 
      Serial.println("=> ĐÃ XÁC NHẬN: BẬT ĐÈN!");
    } else {
      Serial.println("=> BÁO ĐỘNG GIẢ: Đèn xe máy rọi qua. Hủy lệnh bật đèn.");
    }
  }
  
  // KỊCH BẢN 2: Đèn ĐANG BẬT mà trời bỗng nhiên SÁNG
  else if (lightState == HIGH && tin_hieu == LOW) {
    Serial.println("CẢNH BÁO: Phát hiện trời sáng! Đang chờ 5 giây để xác nhận...");
    delay(5000); 
    
    if (digitalRead(sensorPin) == LOW) { 
      lightState = LOW; 
      digitalWrite(relayPin, lightState); 
      Serial.println("=> ĐÃ XÁC NHẬN: TẮT ĐÈN!");
    } else {
      Serial.println("=> BÁO ĐỘNG GIẢ: Có người che bóng. Hủy lệnh tắt đèn.");
    }
  }

  // Chờ nửa giây để chữ trên màn hình chạy chậm lại cho dễ đọc
  delay(500); 
}