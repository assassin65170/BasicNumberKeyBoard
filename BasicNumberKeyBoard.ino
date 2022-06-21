/* 


   0 =48
   1 =49
   2 =50
   3 =51
   4 =52 
   5 =53
   6 =54
   7 =55
   8 =56
   9 =57


*/


#include <Keyboard.h>

const int button1 = 2;
const int button2 = 3;
const int button3 = 4;
const int button4 = 5;
const int button5 = 6;
const int button6 = 7;
const int button7 = 8;
const int button8 = 9;
const int button9 = 10;
const int button10 = 11;


void setup() {
  // put your setup code here, to run once:
  pinMode(button1, INPUT_PULLUP);
  pinMode(button2, INPUT_PULLUP);
  pinMode(button3, INPUT_PULLUP);
  pinMode(button4, INPUT_PULLUP);
  pinMode(button5, INPUT_PULLUP);
  pinMode(button6, INPUT_PULLUP);
  pinMode(button7, INPUT_PULLUP);
  pinMode(button8, INPUT_PULLUP);
  pinMode(button9, INPUT_PULLUP);
  pinMode(button10, INPUT_PULLUP);
  Keyboard.begin();

}

void loop() {
  // put your main code here, to run repeatedly:
  int buttonState1 = digitalRead(button1);
  int buttonState2 = digitalRead(button2);
  int buttonState3 = digitalRead(button3);
  int buttonState4 = digitalRead(button4);
  int buttonState5 = digitalRead(button5);
  int buttonState6 = digitalRead(button6);
  int buttonState7 = digitalRead(button7);
  int buttonState8 = digitalRead(button8);
  int buttonState9 = digitalRead(button9);
  int buttonState10 = digitalRead(button10);

if (buttonState1 == LOW) {

  Keyboard.press(48);
  delay(50);
}

else if(buttonState1 == HIGH) {
  Keyboard.release(48);
  delay(50);
}

if (buttonState2 == LOW) {

  Keyboard.press(49);
  delay(50);
}

else if(buttonState2 == HIGH) {
  Keyboard.release(49);
  delay(50);
}

if (buttonState3 == LOW) {

  Keyboard.press(50);
  delay(50);
}

else if(buttonState3 == HIGH) {
  Keyboard.release(50);
  delay(50);
}

if (buttonState4 == LOW) {

  Keyboard.press(51);
  delay(50);
}

else if(buttonState4 == HIGH) {
  Keyboard.release(51);
  delay(50);
}

if (buttonState5 == LOW) {

  Keyboard.press(52);
  delay(50);
}

else if(buttonState5 == HIGH) {
  Keyboard.release(52);
  delay(50);
}

if (buttonState6 == LOW) {

  Keyboard.press(53);
  delay(50);
}

else if(buttonState6 == HIGH) {
  Keyboard.release(53);
  delay(50);
}

if (buttonState7 == LOW) {

  Keyboard.press(54);
  delay(50);
}

else if(buttonState7 == HIGH) {
  Keyboard.release(54);
  delay(50);
}

if (buttonState8 == LOW) {

  Keyboard.press(55);
  delay(50);
}

else if(buttonState8 == HIGH) {
  Keyboard.release(55);
  delay(50);
}

if (buttonState9 == LOW) {

  Keyboard.press(56);
  delay(50);
}

else if(buttonState9 == HIGH) {
  Keyboard.release(56);
  delay(50);
}

if (buttonState10 == LOW) {

  Keyboard.press(57);
  delay(50);
}

else if(buttonState10 == HIGH) {
  Keyboard.release(57);
  delay(50);
}


}
