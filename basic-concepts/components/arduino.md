# Arduino UNO | Placa Arduino UNO

## ENGLISH

**Description**  
The Arduino UNO is a microcontroller development board based on the ATmega328P. It is widely used for prototyping electronic projects due to its simplicity, versatility, and community support.

**Key Features**  
- 14 digital pins (D0 to D13)  
- 6 analog input pins (A0 to A5)  
- 1 GND pin + 2 extra GNDs on headers  
- 1 USB port for power and code upload  
- 1 barrel jack for external power supply  
- Operating voltage: 5V  
- Clock speed: 16 MHz

**Pin Types**  
- **Digital (D0–D13):** can be configured as `INPUT` or `OUTPUT`  
- **Analog (A0–A5):** used with `analogRead()`  
- **5V pin:** provides constant 5V  
- **GND pin:** reference and current return path

**Best Practices**  
- Never exceed current limit (~40mA per pin)  
- Always use resistors with LEDs and buttons  
- Use `pinMode()` in `setup()` to configure each pin correctly  
- Use external power for high-current components (motors, servos)

---

## PORTUGUÊS

**Descrição**  
O Arduino UNO é uma placa de desenvolvimento baseada no microcontrolador ATmega328P. É amplamente utilizada em projetos eletrônicos por sua simplicidade, versatilidade e grande apoio da comunidade.

**Principais características**  
- 14 pinos digitais (D0 a D13)  
- 6 entradas analógicas (A0 a A5)  
- 1 pino GND + 2 GNDs extras nos headers  
- 1 porta USB para alimentação e envio de código  
- 1 conector para fonte externa (jack)  
- Tensão de operação: 5V  
- Frequência de clock: 16 MHz

**Tipos de pinos**  
- **Digitais (D0–D13):** podem ser configurados como `INPUT` ou `OUTPUT`  
- **Analógicos (A0–A5):** usados com `analogRead()`  
- **Pino 5V:** fornece 5V constantes  
- **Pino GND:** referência e retorno de corrente

**Boas práticas**  
- Nunca exceda o limite de corrente (~40mA por pino)  
- Sempre use resistores com LEDs e botões  
- Use `pinMode()` no `setup()` para configurar os pinos corretamente  
- Use fonte externa para componentes que exigem muita corrente (motores, servos)