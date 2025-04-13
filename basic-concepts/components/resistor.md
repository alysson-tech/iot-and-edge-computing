# Resistor | Resistor

## ENGLISH

**Description**  
A resistor is an electronic component used to limit the flow of electric current in a circuit. It is essential to protect sensitive components such as LEDs, buttons, and microcontrollers.

**How it works**  
The resistor provides electrical resistance, reducing the current passing through a component. It is often placed in series with a LED to prevent it from burning due to excess current.

**Polarity**  
- Resistors have **no polarity** and can be connected in any direction.

**Common values**  
- 150Ω, 220Ω, 330Ω, 10kΩ (used as pull-down or pull-up)

**Connection example**  
- Digital pin 10 → Resistor → LED anode  
- LED cathode → GND

**Code example**
```cpp
int led = 10;
void setup() {
  pinMode(led, OUTPUT);
}
void loop() {
  digitalWrite(led, HIGH);
  delay(500);
  digitalWrite(led, LOW);
  delay(500);
}
```

---

## PORTUGUÊS

**Descrição**  
O resistor é um componente eletrônico usado para limitar o fluxo de corrente elétrica em um circuito. Ele é essencial para proteger componentes sensíveis como LEDs, botões e microcontroladores.

**Como funciona**  
O resistor oferece resistência elétrica, reduzindo a corrente que passa por um componente. É frequentemente usado em série com o LED para evitar que ele queime por excesso de corrente.

**Polaridade**  
- Os resistores **não possuem polaridade** e podem ser conectados em qualquer direção.

**Valores comuns**  
- 150Ω, 220Ω, 330Ω, 10kΩ (usado como pull-down ou pull-up)

**Exemplo de conexão**  
- Pino digital 10 → Resistor → Ânodo do LED  
- Cátodo do LED → GND

**Exemplo de código**
```cpp
int led = 10;
void setup() {
  pinMode(led, OUTPUT);
}
void loop() {
  digitalWrite(led, HIGH);
  delay(500);
  digitalWrite(led, LOW);
  delay(500);
}
```