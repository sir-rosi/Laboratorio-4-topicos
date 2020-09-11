void setup()
{
  pinMode(8, OUTPUT);//se configura el pin 8 como salida 
  pinMode(9, OUTPUT);//se configura el pin 9 como salida 
  pinMode(13,OUTPUT);//se configura el pin 13 como salida 
}

void CambiaLed(){ // se define la funcion cambia led
  digitalWrite(13,!digitalRead(13)); //cambia al estado contrario (!)
}

void loop()
{
  digitalWrite(9, HIGH); // cambia a estado: HIGH el pin 9
  digitalWrite(8, LOW); // cambia a estado: LOW el pin 8
  // AL estar 9 HIGH y 8 LOW el motor gira sentido horario
  delay(1000); // Espera 1 segundo (1000 milisegundos)
  digitalWrite(9, HIGH);// cambia a estado: HIGH el pin 9
  digitalWrite(8, HIGH);// cambia a estado: HIGH el pin 8
  // AL estar 9 HIGH y 8 HIGH el motor se detiene
  delay(500); // Espera 1 segundo (1000 milisegundos)
  digitalWrite(8, HIGH);// cambia a estado: HIGH el pin 8
  digitalWrite(9, LOW);// cambia a estado: LOW el pin 9
  // AL estar 8 HIGH y 9 LOW el motor gira sentido antihorario
  delay(1000); // Espera 1 segundo (1000 milisegundos)
  CambiaLed(); // se usa la funcion cambia led para que cambie el estado del led
  //considerar que es el led integrado en el pin 13 
}
