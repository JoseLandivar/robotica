void setup()
{
    pinMode(6,INPUT_PULLUP);
    pinMode(9,OUTPUT);
}

void loop()
{
    if(digitalRead(6)){
        digitalWrite(9,LOW);
    }
    else{
        digitalWrite(9,HIGH);
    }
}

https://www.tinkercad.com/things/3g92U00Mazc-incredible-lappi/editel?sharecode=nGHmsuGo_LtvLMSscc8BQ7_-EqddNHMTXcuvr351FmQ