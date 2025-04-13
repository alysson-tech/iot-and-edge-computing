# LED | Diodo Emissor de Luz

## ENGLISH

**Description**  
A LED (Light Emitting Diode) is a component that emits light when electric current flows through it. It has polarity and only conducts in one direction — from anode (+) to cathode (–).

**How it works**  
When connected properly, the LED allows current to flow from the digital pin or 5V source, through a resistor, and exits to GND. The resistor is mandatory to limit current and avoid burning the LED.

**Polarity**  
- **Anode (positive):** long leg  
- **Cathode (negative):** short leg  

**Connection example**  
- Digital pin 10 → Resistor 150Ω → LED anode  
- LED cathode → GND

**Code example**
```cpp
int led = 10;
void setup() {
  pinMode(led, OUTPUT);
}
void loop() {
  digitalWrite(led, HIGH); // ON
  delay(1000);
  digitalWrite(led, LOW);  // OFF
  delay(1000);
}
```

---

## PORTUGUÊS

**Descrição**  
Um LED (Diodo Emissor de Luz) é um componente que emite luz quando a corrente elétrica passa por ele. Possui polaridade e só conduz em um sentido — do ânodo (+) para o cátodo (–).

**Como funciona**  
Quando ligado corretamente, o LED permite a passagem de corrente a partir do pino digital ou 5V, passando por um resistor e saindo para o GND. O resistor é obrigatório para limitar a corrente e evitar que o LED queime.

**Polaridade**  
- **Ânodo (positivo):** perna longa  
- **Cátodo (negativo):** perna curta  

**Exemplo de conexão**  
- Pino digital 10 → Resistor 150Ω → Ânodo do LED  
- Cátodo do LED → GND

**Exemplo de código**
```cpp
int led = 10;
void setup() {
  pinMode(led, OUTPUT);
}
void loop() {
  digitalWrite(led, HIGH); // Liga
  delay(1000);
  digitalWrite(led, LOW);  // Desliga
  delay(1000);
}
```