# Basic Electricity Principles

This material compiles key concepts frequently used in Arduino and IoT circuits.
The explanations are based on practical doubts and simplified examples to reinforce learning.

## Voltage and Current

- Voltage is the "pressure" that pushes the electric current through the circuit.
- Current is the flow of electrons through the conductive path.

## Resistors and LEDs

- Resistors limit the current to prevent damage to other components.
- LEDs need resistors to avoid burning due to excess current.

Practical example: A 150Ω resistor was used to protect a LED in a basic blink circuit.

## Push Button

- When pressed, it allows the electric current to pass through.
- Connected with a pull-down resistor to avoid false readings (floating pin).

## Breadboard

- The lateral columns are used to distribute power (5V and GND).
- Central lines are used to connect components.

Important: You can power the entire side rail with 5V and use short jumpers from there to power multiple components — keeping the prototype cleaner and more organized.

## Pins and Connections

- Digital pins control the LED (e.g., D2).
- The button sends a digital signal to the microcontroller.
- GND is always connected to the negative terminal of components.

## Final Notes

- Always check the correct LED orientation (anode and cathode).
- The resistor can be placed before or after the LED (in series) without affecting functionality.
- Avoid using unnecessarily long wires: they make the circuit harder to read and less organized.

---

# Princípios Básicos da Eletricidade

Este material reúne conceitos-chave frequentemente utilizados em circuitos com Arduino e IoT.
As explicações são baseadas em dúvidas práticas e exemplos simplificados para reforçar o aprendizado.

## Tensão e Corrente

- Tensão é a “pressão” que empurra a corrente elétrica através do circuito.
- Corrente é o fluxo de elétrons através do caminho condutor.

## Resistores e LEDs

- Resistores limitam a corrente para evitar danos a outros componentes.
- LEDs precisam de resistores para não queimarem com corrente excessiva.

Exemplo prático: Um resistor de 150Ω foi utilizado para proteger um LED em um circuito simples de piscar.

## Botão

- Quando pressionado, permite a passagem da corrente elétrica.
- Ligado com resistor pull-down para evitar leituras falsas (flutuações no pino).

## Protoboard

- As colunas laterais são usadas para distribuir energia (5V e GND).
- As linhas centrais são usadas para conexão dos componentes.

Importante: Você pode alimentar a lateral inteira com 5V e pegar de lá pequenos jumpers para distribuir para vários componentes — deixando o circuito mais limpo e organizado.

## Pinos e Conexões

- Pinos digitais controlam o LED (ex: D2).
- O botão envia sinal digital ao microcontrolador.
- GND é sempre ligado ao terminal negativo dos componentes.

## Observações Finais

- Sempre verifique a posição correta do LED (ânodo e cátodo).
- O resistor pode ser colocado antes ou depois do LED (em série), sem alterar o funcionamento.
- Evite usar fios longos sem necessidade: isso atrapalha a leitura do circuito e a organização.