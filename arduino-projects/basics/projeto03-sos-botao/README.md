# Project 03 – SOS Signal with Button  
### Morse code triggered manually with a push button and LED

**ENGLISH**  
This project sends an SOS signal in Morse code using a LED, but only when the button is pressed. It's a useful exercise to combine digital input (button) and digital output (LED) while controlling conditional logic.

**Components**  
- Arduino UNO  
- 1 LED (red)  
- 1 Resistor (150Ω)  
- 1 Push button  
- 1 Resistor (10kΩ) as pull-down  
- Breadboard and jumper wires  

**How it works**  
When the button is pressed, the LED starts blinking the SOS signal (`··· --- ···`) in Morse code. When released, the circuit remains idle. The `digitalRead()` function detects the button state and activates the signal only when `HIGH`.

---

**PORTUGUÊS**  
Este projeto envia um sinal de SOS em código Morse com LED, mas apenas quando o botão é pressionado. É um exercício útil para combinar entrada digital (botão) e saída digital (LED) com lógica condicional.

**Componentes**  
- Arduino UNO  
- 1 LED (vermelho)  
- 1 Resistor (150Ω)  
- 1 Botão  
- 1 Resistor de 10kΩ como pull-down  
- Protoboard e jumpers  

**Como funciona**  
Quando o botão é pressionado, o LED começa a piscar o sinal de SOS (`··· --- ···`) em código Morse. Quando o botão é solto, o circuito permanece inativo. A função `digitalRead()` detecta o estado do botão e ativa o sinal somente quando `HIGH`.

---

###  Source Code / Código-fonte  
- [projeto03_sos_botao.ino](projeto03_sos_botao.ino)

###  Video demonstration / Demonstração em vídeo  
- [https://youtu.be/ZsbWcsEwNwc](https://youtu.be/ZsbWcsEwNwc)
