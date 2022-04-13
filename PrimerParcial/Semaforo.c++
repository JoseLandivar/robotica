//Semaforo A
int led1verde=10;
int led1ama=9;
int led1rojo=8;

//Semaforo Peatonal
int ledpverde=6;
int ledprojo=7;

//Semaforo B
int led2verde=4;
int led2ama=3;
int led2rojo=2;

//Sensores
int pir1=11;
int pir2=12;
int pir3=13;

int val1=0;
int val2=0;
int val3=0;

void setup()
{
  Serial.begin(9600);
  pinMode(led1verde, OUTPUT);
  pinMode(led1ama, OUTPUT);
  pinMode(led1rojo, OUTPUT);
  pinMode(led2verde, OUTPUT);
  pinMode(led2ama, OUTPUT);
  pinMode(led2rojo, OUTPUT);
  pinMode(ledpverde, OUTPUT);
  pinMode(ledprojo, OUTPUT);
  pinMode(pir3,INPUT);
  pinMode(pir1, INPUT);
  pinMode(pir2, INPUT);

}

void loop(){
  //Asignacion del valor del sensor a la variable
  val1=digitalRead(pir1);
  val2=digitalRead(pir2);
  val3=digitalRead(pir3); 
 

  if ((val1==HIGH)&(val2==LOW)&(val3==LOW)){
    semaa();
   
  }
   else if((val1==LOW)&(val2==LOW)&(val3==HIGH)){
    semaap();

  }
  else if ((val1==HIGH)&(val2==HIGH)){//Ambos semaforos prenden
  //A
  digitalWrite(ledpverde,LOW);
  digitalWrite(ledprojo,HIGH);
  digitalWrite(led1rojo,LOW);
  digitalWrite(led2rojo,HIGH);
  digitalWrite(led1verde,HIGH);
  delay(5000);
  digitalWrite(led1verde,LOW);
  digitalWrite(led1ama,HIGH);
  delay(4000);
  digitalWrite(led1ama,LOW);
  digitalWrite(led1rojo,HIGH);
  delay(5000);
  
  //B  
  digitalWrite(led2rojo,LOW);
  digitalWrite(led1rojo,HIGH);
  digitalWrite(led2verde,HIGH);
  delay(5000);
  digitalWrite(led2verde,LOW);
  digitalWrite(led2ama,HIGH);
  delay(4000);
  digitalWrite(led2ama,LOW);
  digitalWrite(led2rojo,HIGH);
  delay(5000);
  
  
  } 
  else if((val2==LOW)&(val3==LOW)){
    semaa();

  }
 
   else if(val2==HIGH){
    semab();

  }
  else{
    delay(1000);
    loop();
    
  }
  
}

void semaa(){
  
  digitalWrite(led1rojo,LOW);
  digitalWrite(led2rojo,HIGH);
  digitalWrite(ledpverde,LOW);//PEATON
  digitalWrite(ledprojo,HIGH);//PEATON
  digitalWrite(led1verde,HIGH);
  delay(3000);
  
   //Asignacion del valor del sensor a la variable
  val1=digitalRead(pir1);
  val2=digitalRead(pir2);
  val3=digitalRead(pir3); 
  if((val2==HIGH)||(val3==HIGH)){
  digitalWrite(led1verde,LOW);
  digitalWrite(led1ama,HIGH);
  delay(4000);
  digitalWrite(led1ama,LOW);
  digitalWrite(led1rojo,HIGH);
  delay(5000);
  digitalWrite(led1rojo,LOW);
  }
  

}
//Metodo de encendido de Semaforo B
void semab(){
  digitalWrite(ledpverde,LOW);//PEATON
  digitalWrite(ledprojo,HIGH);//PEATON
  digitalWrite(led2rojo,LOW);
  digitalWrite(led1rojo,HIGH);
  
  digitalWrite(led2verde,HIGH);
  delay(5000);
  digitalWrite(led2verde,LOW);
  digitalWrite(led2ama,HIGH);
  delay(4000);
  digitalWrite(led2ama,LOW);
  digitalWrite(led2rojo,HIGH);
  delay(5000);
  digitalWrite(led2rojo,LOW);
}
//Metodo de encendido de semaforo A y Peatonal
void semaap (){
  digitalWrite(led1rojo,LOW);
  digitalWrite(led2rojo,HIGH);
  digitalWrite(ledprojo,LOW);  //peatonal
  digitalWrite(ledpverde,HIGH);//peatonal Encendido
  digitalWrite(led1verde,HIGH);    
  delay(5000);
  digitalWrite(led1verde,LOW);
  digitalWrite(led1ama,HIGH);
  delay(4000);
  digitalWrite(ledprojo,HIGH);//peatonal
  digitalWrite(ledpverde,LOW);//peatonal Apagado
  delay(1500);
  digitalWrite(led1ama,LOW);
  digitalWrite(led1rojo,HIGH);
  delay(1000);
 
 
}
