
// Autor Miguel Sierra


//Este programa Activa y desactiva las salidas digitales de el Arduino uno 
//En este caso se probo colocando dos led a una resistencia a tierra 
//para probar el correcto funcionamiento de este


void setup() {
  // Se declaran o se dan de alta los 
  //pines del arduino que se utilizaran
  pinMode(13, OUTPUT);
   pinMode(12, OUTPUT);
}

void loop() {
  // se activa el pin digital y se pone en el estado que se necesite, en este caso 
  // se pone el pin 13 en "HIGH" es decir activado o encendido
  digitalWrite(13, HIGH);
  delay(1000);          //Este es el tiempo que se mantendra encendido 
  digitalWrite(13, LOW);//En esta linea cambia el estado de encendido a apagado
  delay(1000);          //Este es el tiempo que tardara apagado

  digitalWrite(12, HIGH);
  delay(1000);
  digitalWrite(12, LOW);
  delay(1000);
}
