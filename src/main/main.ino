#include <SoftwareSerial.h>

#define RX 8
#define TX 9
#define hc12Output

SoftwareSerial HC12(RX, TX);


void setup() {
  HC12.begin(9600);  
}

void loop() {
  HC12.write(0xAD);  
}
