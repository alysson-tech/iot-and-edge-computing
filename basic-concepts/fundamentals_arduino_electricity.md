# Fundamentals of Arduino and Electricity | Fundamentos de Arduino e Eletricidade

## ENGLISH

This document summarizes key electrical concepts applied to Arduino and breadboard prototyping, based on personal learning experience.

### 1. Electric Current and Circuit Basics
- **Conventional current** flows from positive (5V) to negative (GND).
- **Real electron flow** is from GND to 5V.
- GND is not a power source — it acts as the **reference** and **return path** for the current.
- A complete path is always needed for the circuit to function properly.

### 2. Power and Digital Pins
- `5V`: supplies constant voltage, always ON.
- `GND`: electrical reference and return line — **not a supplier of energy**.
- **Digital pins (D2 to D13)**:
  - Can act as `OUTPUT` (to send 5V or 0V) or `INPUT` (to read HIGH/LOW)
  - Limited to ~40mA output current
  - Offer **programmable control**, unlike the fixed 5V pin

### 3. Breadboard Behavior
- Central rows are connected **horizontally** (A–E and F–J are separate).
- Side rails (red = 5V, blue = GND) are connected **vertically**, but often **split in the middle**.
- If using both halves, connect them with jumpers.

#### ⚠️ Breadboard center gap division
Many breadboards have **a central channel that splits the power rails and horizontal rows** into two electrically isolated halves.  
**Common issue:** placing the button or LED on one half, and the 5V or GND on the other — and they don't connect.  
**Solution:** use jumper wires to link both sides or keep the full circuit on the same half.

### 4. Core Components Used

#### LED
- Two legs: **anode (+)** = long, **cathode (–)** = short.
- Only allows current in one direction.
- Must be connected with a resistor to avoid burning out.

#### Resistor
- Limits current flow.
- Can be placed **before or after** the LED.
- Has no polarity.

#### Push-button
- Connects two sides when pressed.
- Requires **pull-down resistor** to stabilize the input signal.

#### Pull-down resistor
- 10kΩ resistor from digital pin to GND.
- Prevents floating values when the button is not pressed.

### 5. Circuit Examples

#### LED Blink
Pin 10 → Resistor (150Ω) → LED anode  
LED cathode → GND

#### SOS LED (automatic)
Same circuit, but LED blinks in Morse code pattern: `··· ––– ···`

#### SOS with Button
- Button between 5V and pin 2  
- Resistor (10kΩ) between pin 2 and GND  
- LED connected as in the previous example

### 6. Code Logic Summary

#### pinMode
Defines whether a pin is input or output:
```cpp
pinMode(10, OUTPUT);
pinMode(2, INPUT);
```

#### digitalWrite / digitalRead
Writes HIGH/LOW to output pins, or reads state from input pins:
```cpp
digitalWrite(10, HIGH); // turn LED ON
int state = digitalRead(2); // read button
```

#### Example logic with button:
```cpp
if (digitalRead(2) == HIGH) {
  digitalWrite(10, HIGH); // LED ON
} else {
  digitalWrite(10, LOW); // LED OFF
}
```

---

## PORTUGUÊS

Este documento resume os principais conceitos elétricos aplicados ao uso de Arduino e protoboard, com base em experiência prática de aprendizado.

### 1. Corrente Elétrica e Conceitos de Circuito
- A **corrente convencional** flui do polo positivo (5V) para o negativo (GND).
- O **fluxo real dos elétrons** ocorre do GND para o 5V.
- O GND não fornece energia — ele é a **referência elétrica** e o **caminho de retorno** da corrente.
- Para o circuito funcionar corretamente, é necessário haver um caminho fechado completo.

### 2. Pinos de Alimentação e Digitais
- `5V`: fornece tensão constante, sempre ligado.
- `GND`: referência elétrica e linha de retorno — **não fornece energia**.
- **Pinos digitais (D2 a D13)**:
  - Podem atuar como `OUTPUT` (enviar 5V ou 0V) ou `INPUT` (ler HIGH/LOW)
  - Corrente de saída limitada (~40mA)
  - Permitem **controle programável**, diferente do 5V fixo

### 3. Funcionamento da Protoboard
- As linhas centrais são conectadas **horizontalmente** (A–E e F–J são separadas).
- As trilhas laterais (vermelha = 5V, azul = GND) são conectadas **verticalmente**, mas muitas vezes **divididas ao meio**.
- Se for usar os dois lados, conecte com jumpers.

#### ⚠️ Divisão central da protoboard
Muitas protoboards possuem **um canal central que divide as trilhas de energia e linhas horizontais** em duas metades eletricamente isoladas.  
**Erro comum:** colocar o botão ou LED em uma metade e o 5V ou GND na outra — e eles não se conectam.  
**Solução:** usar jumpers para unir os dois lados ou manter todo o circuito em uma mesma metade.

### 4. Componentes Utilizados

#### LED
- Duas pernas: **ânodo (+)** = longa, **cátodo (–)** = curta.
- Só permite passagem de corrente em um sentido.
- Deve ser usado com resistor para não queimar.

#### Resistor
- Limita o fluxo de corrente.
- Pode ser colocado **antes ou depois** do LED.
- Não tem polaridade.

#### Botão
- Conecta dois pontos quando pressionado.
- Requer resistor **pull-down** para estabilizar o sinal no pino.

#### Resistor de Pull-down
- Resistor de 10kΩ entre o pino digital e o GND.
- Evita que o pino flutue quando o botão está solto.

### 5. Exemplos de Circuito

#### LED Pisca
Pino 10 → Resistor (150Ω) → ânodo do LED  
Cátodo do LED → GND

#### SOS com LED (automático)
Mesmo circuito anterior, mas com o LED piscando no padrão Morse: `··· ––– ···`

#### SOS com Botão
- Botão entre 5V e pino 2  
- Resistor de 10kΩ entre pino 2 e GND  
- LED montado como nos exemplos anteriores

### 6. Resumo da Lógica do Código

#### pinMode
Define se o pino é de entrada ou saída:
```cpp
pinMode(10, OUTPUT);
pinMode(2, INPUT);
```

#### digitalWrite / digitalRead
Escreve HIGH/LOW nos pinos de saída ou lê o estado de pinos de entrada:
```cpp
digitalWrite(10, HIGH); // acende o LED
int estado = digitalRead(2); // lê o botão
```

#### Exemplo com botão:
```cpp
if (digitalRead(2) == HIGH) {
  digitalWrite(10, HIGH); // LED aceso
} else {
  digitalWrite(10, LOW); // LED apagado
}
```