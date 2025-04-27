# 📋 Experience Report | Relato de Experiência
**Smart Wine Cellar Project | Projeto Adega Inteligente**

---

## 🇬🇧 English

### 1. Initial Assembly and Sensor Orientation Challenge
The project began with the assembly of a basic prototype using a **common DHT11 sensor** without a protection board.  
Due to the absence of physical pin labeling on the component, it was challenging to confidently determine the correct wiring orientation.  
This experience highlighted the importance of validating sensor pinouts physically before applying power, especially when dealing with unmarked components.

**Lesson Learned:**  
- Prefer modules with protection boards that have clear labeling.  
- Always physically confirm the orientation of sensors without visual markers before energizing the circuit.

### 2. Sensor Replacement with a Module
A new **DHT11 module** was used, featuring a black PCB with clearly labeled pins (`-`, `out`, `+`), which greatly simplified the assembly and reduced risk.  
The module also contained a built-in pull-up resistor, improving circuit safety.

**Lesson Learned:**  
- Using well-labeled modules increases reliability and speeds up development.

### 3. Compilation Error: Missing DHT Library
An initial upload attempt resulted in the error:  
`DHT.h: No such file or directory`.  
The issue was resolved by installing the **Adafruit DHT Sensor Library** through the Arduino IDE Library Manager.

**Lesson Learned:**  
- Always include a clear list of required libraries and setup instructions as part of project documentation.

### 4. Final Assembly and Testing
After corrections:
- The DHT11 module was connected to the D2 pin.
- The LDR sensor was connected to an analog input.
- Green, Yellow, and Red LEDs were connected to digital outputs.

The system successfully operated and real-time values were monitored using the Serial Monitor.

### 5. Shared Power Rail Usage
During assembly, the 5V power rail from the Arduino was used to supply multiple components (the DHT11 module and the LDR sensor) by connecting them to the same line on the breadboard.  
This approach is a standard practice in circuit prototyping, allowing efficient distribution of power without the need for multiple separate connections.

### 6. Validation Tests
- **Temperature Test:** Hot air near the sensor increased temperature readings.  
- **Humidity Test:** Damp cloth near the sensor raised humidity readings.  
- **Light Test:** Flashlight on the LDR simulated light variations correctly.

### 7. Observations
Reference parameters for optimal wine storage were used as thresholds:
- Temperature: 12°C to 16°C
- Humidity: 60% to 75%
- Light: Below 200 lux

### 8. Testing Environment Conditions
The environmental conditions at the testing site were not ideal for wine storage simulation (ambient temperature higher than 16°C and high natural light levels).  
Therefore, during the initial validation tests, the code parameters for temperature and luminosity thresholds were temporarily adjusted to match the local climate conditions, enabling proper sensor functionality checks and LED behavior validation.  
After confirming correct operation, the code thresholds were reset to the appropriate wine cellar standards:
- Temperature: 12°C to 16°C
- Humidity: 60% to 75%
- Light: Below 200 lux

---

## 🇧🇷 Português

### 1. Montagem Inicial e Desafio de Orientação do Sensor
O projeto iniciou-se com a montagem de um protótipo básico utilizando um **sensor DHT11 comum**, sem placa de proteção.  
Devido à ausência de marcação física nos pinos do componente, houve dificuldade em determinar com confiança a orientação correta da ligação dos fios.  
Essa experiência evidenciou a importância de validar fisicamente a pinagem de sensores antes da energização, especialmente em componentes sem marcações visuais claras.

**Lição Aprendida:**  
- Preferir módulos com placa de proteção e pinos claramente identificados.  
- Sempre confirmar fisicamente a orientação de sensores sem marcações antes de alimentar o circuito.

### 2. Substituição por Módulo com Proteção
Foi utilizado um novo **módulo DHT11**, com placa preta e pinos claramente identificados (`-`, `out`, `+`), o que simplificou bastante a montagem e reduziu riscos.  
O módulo também já continha o resistor de pull-up embutido, aumentando a segurança elétrica.

**Lição Aprendida:**  
- Utilizar módulos bem identificados melhora a confiabilidade e agiliza o desenvolvimento.

### 3. Erro de Compilação: Falta de Biblioteca DHT
Durante a primeira tentativa de upload do código, ocorreu o erro:  
`DHT.h: No such file or directory`.  
O problema foi resolvido com a instalação da **Adafruit DHT Sensor Library** através do Gerenciador de Bibliotecas da Arduino IDE.

**Lição Aprendida:**  
- Sempre documentar claramente as bibliotecas necessárias e como instalá-las nos projetos.

### 4. Montagem Final e Testes
Após as correções:
- O módulo DHT11 foi conectado ao pino D2.
- O sensor LDR foi conectado a uma entrada analógica.
- LEDs verde, amarelo e vermelho foram conectados a saídas digitais.

O sistema funcionou corretamente, com leituras em tempo real monitoradas via Monitor Serial.

### 5. Uso Compartilhado da Linha de Alimentação
Durante a montagem, a linha de alimentação de 5V do Arduino foi utilizada para energizar múltiplos componentes (o módulo DHT11 e o sensor LDR) conectando-os à mesma linha na protoboard.  
Essa abordagem é prática comum na prototipagem de circuitos, permitindo uma distribuição eficiente da alimentação sem a necessidade de conexões separadas.

### 6. Testes de Validação
- **Teste de Temperatura:** Aplicação de ar quente próximo ao sensor elevou corretamente as leituras de temperatura.  
- **Teste de Umidade:** Aproximação de pano úmido aumentou as leituras de umidade.  
- **Teste de Luminosidade:** Iluminação do LDR com lanterna simulou variações de luminosidade de forma eficaz.

### 7. Observações
Foram utilizados parâmetros reais de conservação de vinhos como referência para os limites:
- Temperatura: 12°C a 16°C
- Umidade: 60% a 75%
- Luminosidade: Abaixo de 200 lux

### 8. Condições do Ambiente de Teste
As condições ambientais no local de teste não eram ideais para simulação de armazenamento de vinhos (temperatura ambiente superior a 16°C e altos níveis de luminosidade natural).  
Portanto, durante os testes iniciais de validação, os parâmetros de temperatura e luminosidade no código foram temporariamente ajustados para se adequar às condições climáticas locais, permitindo a verificação adequada do funcionamento dos sensores e do comportamento dos LEDs.  
Após a confirmação do funcionamento correto, os parâmetros do código foram restaurados para os padrões adequados de uma adega:
- Temperatura: 12°C a 16°C
- Umidade: 60% a 75%
- Luminosidade: Abaixo de 200 lux

---
