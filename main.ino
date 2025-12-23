#include <Servo.h>

Servo thumb;    // s1
Servo pointer;  // s2
Servo ring;     // s3
Servo pinky;    //s4
Servo middle;   // s5
int moveDelay = 1000; // ms

// Movement delay between positions
int moveDelay = 1000; // ms


void setup() {
  thumb.attach(5);
  pointer.attach(6);
  middle.attach(11);
  ring.attach(9);
  pinky.attach(10);

  thumb.write(0);
  pointer.write(180);
  middle.write(0);
  ring.write(180);
  pinky.write(0);
  
}


void loop() {
  
  close();
  open();

}


void open(){
 
  thumb.write(0);
  pointer.write(180);
  middle.write(0);
  ring.write(180);
  pinky.write(0);
  delay(moveDelay);
 
}

void close(){
  thumb.write(180);
  pointer.write(0);
  middle.write(180);
  ring.write(0);
  pinky.write(180);
  delay(moveDelay);
}


// Writes the same angle to all servos
