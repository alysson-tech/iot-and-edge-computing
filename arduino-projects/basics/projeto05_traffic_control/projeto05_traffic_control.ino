// Definição dos pinos para os LEDs do semáforo de trânsito
const int ledVerdeCarro = 10;
const int ledAmareloCarro = 11;
const int ledVermelhoCarro = 12;

// Definição dos pinos para os LEDs do semáforo de pedestres
const int ledVerdePedestre = 8;
const int ledVermelhoPedestre = 9;

// Pino do botão para pedestres
const int BOTAO = 2;

// Variáveis para controle do estado do botão
int estadoBotao = 0;
int ultimoEstadoBotao = LOW;

// Tempos
const long tempoVerdeCarro = 10000;     // 10 segundos
const long tempoAmareloCarro = 3000;    // 3 segundos
const long tempoVerdePedestre = 8000;   // 8 segundos

void setup() {
  pinMode(ledVermelhoCarro, OUTPUT);
  pinMode(ledAmareloCarro, OUTPUT);
  pinMode(ledVerdeCarro, OUTPUT);
  pinMode(ledVermelhoPedestre, OUTPUT);
  pinMode(ledVerdePedestre, OUTPUT);
  pinMode(BOTAO, INPUT);

  // Estado inicial
  digitalWrite(ledVerdeCarro, HIGH);
  digitalWrite(ledAmareloCarro, LOW);
  digitalWrite(ledVermelhoCarro, LOW);

  digitalWrite(ledVerdePedestre, LOW);
  digitalWrite(ledVermelhoPedestre, HIGH);
}

void loop() {
  estadoBotao = digitalRead(BOTAO);

  // Se botão for pressionado e ainda não estava pressionado antes
  if (estadoBotao == HIGH && ultimoEstadoBotao == LOW) {
    delay(50); // debounce
    iniciarTravessiaPedestre();
  }

  ultimoEstadoBotao = estadoBotao;
}

void iniciarTravessiaPedestre() {
  // Mudar semáforo do carro para vermelho
  digitalWrite(ledVerdeCarro, LOW);
  digitalWrite(ledAmareloCarro, HIGH);
  delay(tempoAmareloCarro);

  digitalWrite(ledAmareloCarro, LOW);
  digitalWrite(ledVermelhoCarro, HIGH);

  // Libera pedestre
  digitalWrite(ledVermelhoPedestre, LOW);
  digitalWrite(ledVerdePedestre, HIGH);
  delay(tempoVerdePedestre);

  // Volta à condição inicial
  digitalWrite(ledVerdePedestre, LOW);
  digitalWrite(ledVermelhoPedestre, HIGH);

  digitalWrite(ledVermelhoCarro, LOW);
  digitalWrite(ledVerdeCarro, HIGH);
}