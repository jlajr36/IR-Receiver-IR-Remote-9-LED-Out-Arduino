#include <IRremote.h>

int LED1 = 3;
int LED2 = 4;
int LED3 = 5;
int LED4 = 6;
int LED5 = 7;
int LED6 = 8;
int LED7 = 9;
int LED8 = 10;
int LED9 = 11;

int RECV_PIN = 2;
IRrecv irrecv(RECV_PIN);
decode_results results;
String value = ""; 

void setup() {
  Serial.begin(9600);
  irrecv.enableIRIn();
  irrecv.blink13(true);
  pinMode(LED1, OUTPUT);
  pinMode(LED2, OUTPUT);
  pinMode(LED3, OUTPUT);
  pinMode(LED4, OUTPUT);
  pinMode(LED5, OUTPUT);
  pinMode(LED6, OUTPUT);
  pinMode(LED7, OUTPUT);
  pinMode(LED8, OUTPUT);
  pinMode(LED9, OUTPUT);
}

void loop() {
  if(irrecv.decode(&results)) {
    //Serial.println(results.value, HEX);
    switch(results.value) {
      //0
      case 0xFF6897:
        Serial.println("0");
        digitalWrite(LED1, 0);
        digitalWrite(LED2, 0);
        digitalWrite(LED3, 0);
        digitalWrite(LED4, 0);
        digitalWrite(LED5, 0);
        digitalWrite(LED6, 0);
        digitalWrite(LED7, 0);
        digitalWrite(LED8, 0);
        digitalWrite(LED9, 0);
        break;
      //1
      case 0xFF30CF:
        Serial.println("1");
        digitalWrite(LED1, 1);
        digitalWrite(LED2, 0);
        digitalWrite(LED3, 0);
        digitalWrite(LED4, 0);
        digitalWrite(LED5, 0);
        digitalWrite(LED6, 0);
        digitalWrite(LED7, 0);
        digitalWrite(LED8, 0);
        digitalWrite(LED9, 0);
        break;
      //2
      case 0xFF18E7:
        Serial.println("2");
        digitalWrite(LED1, 0);
        digitalWrite(LED2, 1);
        digitalWrite(LED3, 0);
        digitalWrite(LED4, 0);
        digitalWrite(LED5, 0);
        digitalWrite(LED6, 0);
        digitalWrite(LED7, 0);
        digitalWrite(LED8, 0);
        digitalWrite(LED9, 0);
        break;
      //3
      case 0xFF7A85:
        Serial.println("3");
        digitalWrite(LED1, 0);
        digitalWrite(LED2, 0);
        digitalWrite(LED3, 1);
        digitalWrite(LED4, 0);
        digitalWrite(LED5, 0);
        digitalWrite(LED6, 0);
        digitalWrite(LED7, 0);
        digitalWrite(LED8, 0);
        digitalWrite(LED9, 0);
        break;
      //4
      case 0xFF10EF:
        Serial.println("4");
        digitalWrite(LED1, 0);
        digitalWrite(LED2, 0);
        digitalWrite(LED3, 0);
        digitalWrite(LED4, 1);
        digitalWrite(LED5, 0);
        digitalWrite(LED6, 0);
        digitalWrite(LED7, 0);
        digitalWrite(LED8, 0);
        digitalWrite(LED9, 0);
        break;
      //5
      case 0xFF38C7:
        Serial.println("5");
        digitalWrite(LED1, 0);
        digitalWrite(LED2, 0);
        digitalWrite(LED3, 0);
        digitalWrite(LED4, 0);
        digitalWrite(LED5, 1);
        digitalWrite(LED6, 0);
        digitalWrite(LED7, 0);
        digitalWrite(LED8, 0);
        digitalWrite(LED9, 0);
        break;
      //6
      case 0xFF5AA5:
        Serial.println("6");
        digitalWrite(LED1, 0);
        digitalWrite(LED2, 0);
        digitalWrite(LED3, 0);
        digitalWrite(LED4, 0);
        digitalWrite(LED5, 0);
        digitalWrite(LED6, 1);
        digitalWrite(LED7, 0);
        digitalWrite(LED8, 0);
        digitalWrite(LED9, 0);
        break;
      //7
      case 0xFF42BD:
        Serial.println("7");
        digitalWrite(LED1, 0);
        digitalWrite(LED2, 0);
        digitalWrite(LED3, 0);
        digitalWrite(LED4, 0);
        digitalWrite(LED5, 0);
        digitalWrite(LED6, 0);
        digitalWrite(LED7, 1);
        digitalWrite(LED8, 0);
        digitalWrite(LED9, 0);
        break;
      //8
      case 0xFF4AB5:
        Serial.println("8");
        digitalWrite(LED1, 0);
        digitalWrite(LED2, 0);
        digitalWrite(LED3, 0);
        digitalWrite(LED4, 0);
        digitalWrite(LED5, 0);
        digitalWrite(LED6, 0);
        digitalWrite(LED7, 0);
        digitalWrite(LED8, 1);
        digitalWrite(LED9, 0);
        break;
      //9
      case 0xFF52AD:
        Serial.println("9");
        digitalWrite(LED1, 0);
        digitalWrite(LED2, 0);
        digitalWrite(LED3, 0);
        digitalWrite(LED4, 0);
        digitalWrite(LED5, 0);
        digitalWrite(LED6, 0);
        digitalWrite(LED7, 0);
        digitalWrite(LED8, 0);
        digitalWrite(LED9, 1);
        break;
    }
    irrecv.resume();
  }
}

