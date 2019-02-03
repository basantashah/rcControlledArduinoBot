// Define the enable pin number for PWM
int ENALeftFirst = 5;
int ENALeftSecond = 6;
int ENALeftThird = 7;
int ENALeftFourth = 8;
int ENARightFirst = 9;
int ENARightSecond = 10;
int ENARightThird = 11;
int ENARightFourth = 12;

// define input pin for left side motors

int INPUTLEFT1 = 13;
int INPUTLEFT2 = 14;
int INPUTLEFT3 = 15;
int INPUTLEFT4 = 16;

// define input pin for right side motors

int INPUTRight1 = 17;
int INPUTRight2 = 18;
int INPUTRight3 = 19;
int INPUTRight4 = 20;

// since we are using RC remote, here we have now time to declare the pin number for rc input
int rcRemoteLeftConfig = 22;
int rcRemoteRightConfig = 23;

// Add setup for pin mode configuration and baud rate setting
void setup()
{
    // since all the motor drivers pin are to be used as output pins so we will configure pinMode as output
    pinMode(INPUTLEFT1, OUTPUT);
    pinMode(INPUTLEFT2, OUTPUT);
    pinMode(INPUTLEFT3, OUTPUT);
    pinMode(INPUTLEFT4, OUTPUT);

    // set all right inputpins as output too
    pinMode(INPUTRight1, OUTPUT);
    pinMode(INPUTRight2, OUTPUT);
    pinMode(INPUTRight3, OUTPUT);
    pinMode(INPUTRight4, OUTPUT);

    // set the output pin as HIGH
    digitalWrite(INPUTRight1, HIGH);
    digitalWrite(INPUTRight2, HIGH);
    digitalWrite(INPUTRight3, HIGH);
    digitalWrite(INPUTRight4, HIGH);

    // set the output of pin as LOW for left pin
    digitalWrite(INPUTLEFT1, LOW);
    digitalWrite(INPUTLEFT2, LOW);
    digitalWrite(INPUTLEFT3, LOW);
    digitalWrite(INPUTLEFT4, LOW);

    // set the rc receiver pins as input
    pinMode(rcRemoteLeftConfig, INPUT);
    pinMode(rcRemoteRightConfig, INPUT);

    // set the serial output baud rate
    Serial.begins(9600);
}