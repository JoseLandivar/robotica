  Serial.begin(9600);
  
  //Escribimos por el monitor serie mensaje de inicio
  Serial.println("Inicio de sketch - valores del potenciometro");
 
  pinMode(LED_1, OUTPUT);
  pinMode(LED_2, OUTPUT);
  pinMode(LED_3, OUTPUT);
}
 
void loop() {
  // leemos del pin A0 valor
  valor = analogRead(A0);
 
  //Imprimimos por el monitor serie
  Serial.print("El valor es = ");
  Serial.println(valor);
 
  if(valor >= 0 && valor <=341)
  {
      digitalWrite(LED_1, HIGH);
      digitalWrite(LED_2, LOW);
      digitalWrite(LED_3, LOW);
  } 
  
  if (valor >= 342 && valor <=683)
  {
      digitalWrite(LED_1, LOW);
      digitalWrite(LED_2, HIGH);
      digitalWrite(LED_3, LOW);
  }
 
  if (valor >= 684 && valor <=1023)
  {
      digitalWrite(LED_1, LOW);
      digitalWrite(LED_2, LOW);
      digitalWrite(LED_3, HIGH);
    }
}