
int sensorPin=11; // declaramos el sensor PIR en el pin 11
int val = 0; //variable para asignar la lectura del sensor PIR

void setup()
{
pinMode(ledPin, OUTPUT); //El pin 12 del arduino lo asignamos como salida para el led
pinMode(sensorPin, INPUT);//El pin 11 lo asignamos como entrada para la señal del sensor
Serial.begin(9600);
for(int i = 0; i > 30; i++) //Utilizamos un for para calibrar el sensor depende del tipo de sensor que utilicemos va a cambiar el tiempo de calibración
{
delay(1000);
}
delay(50);
}
void loop()
{
val = digitalRead(sensorPin); //Lee el valor de la variable (val)
if (val == HIGH) //Si detecta que hay movimiento manda activar el led que hay conectado en el pin 12 del arduino
{
digitalWrite(ledPin, HIGH);
}
else //Si la condición anterior no se cumple manda apagar el led
{
digitalWrite(ledPin, LOW);
}
}