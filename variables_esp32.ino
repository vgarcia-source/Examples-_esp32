/*
  Activitat A05 - Variables ESP32
  Alumne: Victor Garcia

  Exemple dels diferents tipus de variables:
  int
  long
  float
  char
  bool
  const
*/

const int ledPin = 2;      // Valor que no canviarà

int contador = 0;          // Nombre enter

long tempsEspera = 1000;   // Nombre enter gran

float temperatura = 23.5;  // Nombre decimal

char lletra = 'A';         // Caràcter

bool ledEncès = true;      // true o false

void setup() {

  Serial.begin(115200);

  Serial.println("Exemple de variables ESP32");

  Serial.print("contador = ");
  Serial.println(contador);

  Serial.print("tempsEspera = ");
  Serial.println(tempsEspera);

  Serial.print("temperatura = ");
  Serial.println(temperatura);

  Serial.print("lletra = ");
  Serial.println(lletra);

  Serial.print("ledEncès = ");
  Serial.println(ledEncès);

  pinMode(ledPin, OUTPUT);
}

void loop() {

  if (ledEncès) {

    digitalWrite(ledPin, HIGH);
    delay(tempsEspera);

    digitalWrite(ledPin, LOW);
    delay(tempsEspera);

    contador++;

    Serial.print("Comptador: ");
    Serial.println(contador);

    if (contador == 5) {
      ledEncès = false;
      Serial.println("LED aturat");
    }
  }
}
