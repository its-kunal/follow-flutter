#include <SoftwareSerial.h>
#include <cppQueue.h>


#define ENA1 D0
#define IN1 D1
#define IN2 D2
#define ENA2 D3
#define IN3 D4
#define IN4 D5
#define BtTx D6
#define BtRx D7
#define timeDelay1 700
#define SamplingSice 3

SoftwareSerial btSerial(BtTx, BtRx);

void stopWheels() // s
{
    analogWrite(ENA1, 0);
    analogWrite(ENA2, 0);
}

void takeForward(int t) // f
{
    digitalWrite(IN1, 1);
    digitalWrite(IN2, 0);
    analogWrite(ENA1, 255);
    digitalWrite(IN3, 1);
    digitalWrite(IN4, 0);
    analogWrite(ENA2, 255);
    delay(t);
    stopWheels();
}

void takeReverse(int t) // b
{
    digitalWrite(IN1, 0);
    digitalWrite(IN2, 1);
    analogWrite(ENA1, 255);
    digitalWrite(IN3, 0);
    digitalWrite(IN4, 1);
    analogWrite(ENA2, 255);
    delay(t);
    stopWheels();
}

void takeLeft() // l
{
    digitalWrite(IN1, 0);
    digitalWrite(IN2, 1);
    analogWrite(ENA1, 255);
    digitalWrite(IN3, 0);
    digitalWrite(IN4, 1);
    analogWrite(ENA2, 0);
    delay(SamplingSice * 1000);
    stopWheels();
}

void takeRight() // r
{
    digitalWrite(IN1, 0);
    digitalWrite(IN2, 1);
    analogWrite(ENA1, 0);
    digitalWrite(IN3, 0);
    digitalWrite(IN4, 1);
    analogWrite(ENA2, 255);
    delay(SamplingSice * 1000);
    stopWheels();
}

void setup()
{
    // 1st motor is in right hand.
    // 2nd motor is in left hand.
    pinMode(ENA1, 1);
    pinMode(IN1, 1);
    pinMode(IN2, 1);
    pinMode(ENA2, 1);
    pinMode(IN3, 1);
    pinMode(IN4, 1);

    btSerial.begin(115200);
}
// Main Program Executes Here
void loop()
{
    if (btSerial.available() > 0)
    {
        char a = btSerial.read();
        switch (a)
        {
        case 's':
            stopWheels();
            break;
        case 'r':
            takeRight();
        case 'l':
            takeLeft();
        case 'f':
            takeForward(timeDelay1);
        case 'b':
            takeReverse(timeDelay1);
        default:
            break;
        }
    }
}
