# Project 05 – Traffic Control with Pedestrian Button | Projeto 05 – Semáforo com Botão de Pedestre

## ENGLISH

This project simulates a traffic light system with pedestrian crossing control using a button. When the button is pressed, the car light turns red and the pedestrian light turns green for a few seconds. The system then resets automatically.

### Components
- 1x Arduino UNO  
- 5x LEDs (3 for cars: Green, Yellow, Red; 2 for pedestrians: Red and Green)  
- 5x 150Ω resistors  
- 1x Push-button  
- 1x 10kΩ resistor (pull-down)  
- Breadboard  
- Jumper wires  

### Features
- **Pedestrian-controlled** traffic system using button  
- Includes signal transition delay for realism  
- Practice with **digital input (button)** and **multiple digital outputs (LEDs)**  

### How it works
- Default state: cars follow a looping traffic light pattern  
- When the pedestrian button is pressed:  
  - Car light goes from green to yellow to red  
  - Pedestrian light turns green for a few seconds  
  - Then returns to red and cycle restarts

> ⚠️ During assembly, a common issue occurred: components placed on opposite sides of the protoboard’s central gap were not receiving power.  
> The protoboard is **electrically split in the middle**.  
> **Solution**: Use jumper wires to connect both sides or build on a single side.  
> Discovering this resolved the problem and completed the project successfully.

> Para ver a montagem física do circuito, clique no link ou assista ao vídeo abaixo.

> To see the physical setup of the circuit, click the link or watch the video below.

---
## PORTUGUÊS

Este projeto simula um sistema de semáforo com controle de travessia para pedestres usando um botão. Quando o botão é pressionado, o semáforo dos carros fica vermelho e o dos pedestres fica verde por alguns segundos. O sistema então reinicia automaticamente.

### Componentes
- 1x Arduino UNO  
- 5x LEDs (3 para carros: Verde, Amarelo, Vermelho; 2 para pedestres: Vermelho e Verde)  
- 5x Resistores de 150Ω  
- 1x Push-button  
- 1x Resistor de 10kΩ (pull-down)  
- Protoboard  
- Jumpers  

### Funcionalidades
- Sistema de semáforo controlado por botão de pedestre  
- Inclui tempos de transição realistas entre os sinais  
- Prática com **entrada digital (botão)** e **múltiplas saídas digitais (LEDs)**  

### Como funciona
- Estado padrão: os LEDs dos carros seguem o ciclo automático  
- Quando o botão do pedestre é pressionado:  
  - O LED do carro muda de verde para amarelo e depois vermelho  
  - O LED verde do pedestre acende por alguns segundos  
  - Em seguida, volta ao vermelho e o ciclo reinicia

> ⚠️ Durante a montagem, ocorreu um problema comum: os componentes estavam em lados opostos da divisão central da protoboard e não recebiam alimentação corretamente.  
> A protoboard é **dividida eletricamente ao meio**.  
> **Solução**: usar jumpers para unir as duas metades ou montar tudo em um único lado.  
> Identificar esse detalhe foi essencial para o sucesso do projeto.

---

### Preview | Pré-visualização  
- [projeto05_traffic_control.png](projeto05_traffic_control.png)

### Source Code / Código-fonte  
- [projeto05_traffic_control.ino](projeto05_traffic_control.ino)

### Video demonstration / Demonstração em vídeo  
- (Video will be added after re-recording in landscape format.)
