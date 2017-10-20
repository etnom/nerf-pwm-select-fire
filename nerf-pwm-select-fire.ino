#define IR_GATE 0

#define JOYSTICK_VERT 1
#define JOYSTICK_HORIZ 2

#define REV_TRIGGER 1
#define PUSHER_TRIGGER 0

#define FLYWHEELS_PWM 3
#define PUSHER_PWM 11

byte fireMode = 0;


void setup () {
    pinMode(REV_TRIGGER, INPUT);
    pinMode(PUSHER_TRIGGER, INPUT);
}

void loop () {
    
}