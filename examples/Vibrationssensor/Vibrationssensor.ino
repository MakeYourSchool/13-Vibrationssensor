//This code-example comes from the official Wiki of Seeed Studio: http://wiki.seeedstudio.com/Grove-Piezo_Vibration_Sensor/

const int ledPin=13;
void setup() {
    Serial.begin(9600);
    pinMode(ledPin,OUTPUT);
}

void loop() {
    int sensorState = digitalRead(2);
    Serial.println(sensorState);
    delay(100);
    if(sensorState == HIGH)
    {
        digitalWrite(ledPin,HIGH);
    }
    else
    {
        digitalWrite(ledPin,LOW);
    }
}
