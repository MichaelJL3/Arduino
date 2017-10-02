
#include "ControlledServo.hpp"

ControlledServo::ControlledServo() {
  Servo();
  pos = MINPOS;
  position(pos);
}

ControlledServo::ControlledServo(const short p) {
  Servo();
  pos = p;
  position(pos);
}

void ControlledServo::move(const short n) {
  if(pos + n >= MINPOS && pos + n <= MAXPOS) {
    pos += n;
    write(pos);
  }
}

void ControlledServo::position(const short n) {
  pos = n;
  pos = (pos < MINPOS ? MINPOS : pos);
  pos = (pos > MAXPOS ? MAXPOS : pos);
  write(pos);
}
