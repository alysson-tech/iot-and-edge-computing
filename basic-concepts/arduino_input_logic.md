# Arduino Input Logic: Pull-down, Pull-up, Debounce | Lógica de Entrada no Arduino: Pull-down, Pull-up, Flutuação

## ENGLISH

This document explains how to handle digital inputs with Arduino, especially when working with push buttons. It covers pull-down and pull-up resistors, floating states, debounce handling, and how to configure your digital pins for stable readings.

### 1. What is a Floating Pin?
A floating pin is a digital input that is not connected to a fixed voltage (neither 5V nor GND). It may randomly read HIGH or LOW, causing instability.

### 2. Pull-down Resistor
- Connects the digital pin to GND through a resistor (commonly 10kΩ).
- Keeps the pin LOW when the button is not pressed.
- When the button is pressed, it connects the pin directly to 5V, overriding the resistor.

**Wiring Example (pull-down):**
```
5V ---- [Button] ----+---- D2
                     |
                 [10kΩ]
                     |
                    GND
```

**Code logic:**
```cpp
if (digitalRead(2) == HIGH) {
  // Button is pressed
}
```

---

### 3. Pull-up Resistor
- Connects the digital pin to 5V through a resistor.
- Keeps the pin HIGH when the button is not pressed.
- When the button is pressed, it connects the pin directly to GND.

**Wiring Example (pull-up):**
```
D2 ----+---- [Button] ---- GND
       |
    [10kΩ]
       |
      5V
```

Or simply use internal pull-up:
```cpp
pinMode(2, INPUT_PULLUP);
```

**Code logic:**
```cpp
if (digitalRead(2) == LOW) {
  // Button is pressed
}
```

---

### 4. Debounce Handling
Mechanical buttons can generate multiple false signals when pressed or released due to contact bounce. Use a short delay after detecting a change:

```cpp
if (digitalRead(2) == HIGH && lastState == LOW) {
  delay(50); // Debounce
  // Respond to button press
}
```

---

## PORTUGUÊS

Este documento explica como tratar entradas digitais no Arduino, especialmente ao usar botões. Aborda resistores pull-down e pull-up, estado flutuante, debounce e como configurar os pinos para leituras estáveis.

### 1. O que é um pino flutuante?
É um pino de entrada que não está conectado nem ao GND nem ao 5V. Pode oscilar entre HIGH e LOW, gerando comportamentos imprevisíveis.

### 2. Resistor Pull-down
- Conecta o pino digital ao GND através de um resistor (normalmente 10kΩ).
- Mantém o pino em LOW enquanto o botão não está pressionado.
- Ao pressionar o botão, o pino é ligado diretamente ao 5V.

**Exemplo de ligação (pull-down):**
```
5V ---- [Botão] ----+---- D2
                    |
                [10kΩ]
                    |
                   GND
```

**Lógica no código:**
```cpp
if (digitalRead(2) == HIGH) {
  // Botão pressionado
}
```

---

### 3. Resistor Pull-up
- Conecta o pino digital ao 5V por um resistor.
- Mantém o pino em HIGH enquanto o botão não é pressionado.
- Ao pressionar, conecta o pino diretamente ao GND.

**Exemplo de ligação (pull-up):**
```
D2 ----+---- [Botão] ---- GND
       |
    [10kΩ]
       |
      5V
```

Ou use o resistor pull-up interno:
```cpp
pinMode(2, INPUT_PULLUP);
```

**Lógica no código:**
```cpp
if (digitalRead(2) == LOW) {
  // Botão pressionado
}
```

---

### 4. Tratamento de Bounce (debounce)
Botões mecânicos podem gerar sinais instáveis ao serem pressionados ou soltos. Use um pequeno atraso após detectar mudança:

```cpp
if (digitalRead(2) == HIGH && ultimoEstado == LOW) {
  delay(50); // Elimina ruído
  // Reage ao botão
}
```