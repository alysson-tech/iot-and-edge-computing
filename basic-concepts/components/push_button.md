# Push-button | Botão (Push-button)

## ENGLISH

**Description**  
A push-button is a basic digital input device that allows the user to manually trigger an action in the circuit. It closes the circuit when pressed and opens it when released.

**How it works**  
When the button is pressed, it connects two terminals and sends a HIGH signal to the input pin. When released, the signal goes LOW — but only if a pull-down resistor is used to prevent the pin from floating.

**Polarity**  
- Push-buttons have **no polarity**.  
- Typically mounted across the central gap of the breadboard.

**Connection example**  
- One side to 5V  
- Other side to digital pin (e.g. D2)  
- Pull-down resistor (10kΩ) between pin and GND

**Code example**
```cpp
int button = 2;
int led = 10;

void setup() {
  pinMode(button, INPUT);
  pinMode(led, OUTPUT);
}

void loop() {
  if (digitalRead(button) == HIGH) {
    digitalWrite(led, HIGH);
  } else {
    digitalWrite(led, LOW);
  }
}
```

---

## PORTUGUÊS

**Descrição**  
O botão (push-button) é um dispositivo de entrada digital simples que permite ao usuário acionar manualmente uma ação no circuito. Ele fecha o circuito quando pressionado e abre quando solto.

**Como funciona**  
Ao ser pressionado, o botão conecta dois terminais e envia um sinal HIGH para o pino de entrada. Quando solto, o sinal volta a ser LOW — mas apenas se for usado um resistor pull-down para evitar flutuação.

**Polaridade**  
- Botões **não possuem polaridade**.  
- Geralmente são montados atravessando o canal central da protoboard.

**Exemplo de conexão**  
- Um lado ligado ao 5V  
- Outro lado ligado ao pino digital (ex: D2)  
- Resistor de pull-down (10kΩ) entre o pino e o GND

**Exemplo de código**
```cpp
int botao = 2;
int led = 10;

void setup() {
  pinMode(botao, INPUT);
  pinMode(led, OUTPUT);
}

void loop() {
  if (digitalRead(botao) == HIGH) {
    digitalWrite(led, HIGH);
  } else {
    digitalWrite(led, LOW);
  }
}
```