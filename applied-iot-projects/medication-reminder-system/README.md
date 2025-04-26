# 💊 Medication Reminder System | Sistema de Lembrete de Medicamentos

> This is an early-stage modular IoT prototype developed for educational and exploratory purposes.  
> Future expansions may include app integration and advanced monitoring features.

> Este é um protótipo modular de IoT em estágio inicial, desenvolvido para fins educacionais e de experimentação.  
> Expansões futuras poderão incluir integração com aplicativo e funcionalidades avançadas de monitoramento.

---

## 🇬🇧 English

**Overview:**  
The Medication Reminder System helps ensure that individuals remember to take their medications correctly and on time.  
It uses basic IoT components to provide continuous sound and/or visual alerts at scheduled times, requiring manual acknowledgment to confirm dose intake.

**MVP Features – Phase 1:**

- Scheduled alerts via buzzer or LED
- **Continuous alert until manual confirmation by button press**
- Simple time setting via code (future: app or display interface)

**Main Components:**

- Arduino UNO or ESP32  
- Real Time Clock Module (DS3231 or DS1307) *(optional but recommended)*  
- Buzzer or RGB LED  
- Push button (mandatory to stop alarm)  
- Optional: OLED Display for showing reminders

**Folder Structure:**

- medication-reminder-system/  
  - README.md  
  - code/  
    - medication_reminder_mvp.ino *(added)*  
  - images/  
    - diagram *(to be added)*

---

## 🇧🇷 Português

**Visão Geral:**  
O Sistema de Lembrete de Medicamentos auxilia na garantia de que as pessoas tomem seus medicamentos corretamente e nos horários programados.  
Utiliza componentes básicos de IoT para fornecer alertas sonoros e/ou visuais contínuos nos horários definidos, exigindo confirmação manual para encerrar o alarme.

**Funcionalidades do MVP – Fase 1:**

- Alertas programados via buzzer ou LED
- **Alerta contínuo até confirmação manual via botão**
- Configuração simples de horários no código (futuro: app ou display para ajustes)

**Componentes Principais:**

- Arduino UNO ou ESP32  
- Módulo de Relógio de Tempo Real (RTC) DS3231 ou DS1307 *(opcional, mas recomendado)*  
- Buzzer ou LED RGB  
- Botão de push (obrigatório para encerrar o alarme)  
- Opcional: Display OLED para exibir lembretes

**Estrutura de Pastas:**

- medication-reminder-system/  
  - README.md  
  - code/  
    - medication_reminder_mvp.ino *(adicionado)*  
  - images/  
    - diagrama *(a ser adicionado)*

---

## 📈 Future Expansions / Expansões Futuras

Future expansions may include app integration and advanced monitoring features.

Expansões futuras poderão incluir integração com aplicativo e funcionalidades avançadas de monitoramento.

---

## ©️ License / Licença

🇺🇸 MIT License

Copyright (c) 2025 Alysson Bruno Oliveira Santos

Permission is hereby granted, free of charge, to any person obtaining a copy of this software and associated documentation files (the "Software"), to deal in the Software without restriction, including without limitation the rights to use, copy, modify, merge, publish, distribute, sublicense, and/or sell copies of the Software, and to permit persons to whom the Software is furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in all copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.

---

🇧🇷 Licença MIT

Copyright (c) 2025 Alysson Bruno Oliveira Santos

É concedida permissão, livre de encargos, a qualquer pessoa que obtenha uma cópia deste software e dos arquivos de documentação associados (o "Software"), para negociar no Software sem restrição, incluindo, sem limitação, os direitos de usar, copiar, modificar, mesclar, publicar, distribuir, sublicenciar e/ou vender cópias do Software, e permitir que pessoas a quem o Software é fornecido o façam, sujeitas às seguintes condições:

O aviso de copyright acima e este aviso de permissão devem ser incluídos em todas as cópias ou partes substanciais do Software.

O SOFTWARE É FORNECIDO "NO ESTADO EM QUE SE ENCONTRA", SEM GARANTIA DE QUALQUER TIPO, EXPRESSA OU IMPLÍCITA, INCLUINDO MAS NÃO SE LIMITANDO ÀS GARANTIAS DE COMERCIALIZAÇÃO, ADEQUAÇÃO A UM DETERMINADO FIM E NÃO INFRAÇÃO. EM NENHUMA HIPÓTESE OS AUTORES OU DETENTORES DOS DIREITOS AUTORAIS SERÃO RESPONSÁVEIS POR QUALQUER RECLAMAÇÃO, DANO OU OUTRA RESPONSABILIDADE, SEJA EM UMA AÇÃO DE CONTRATO, RESPONSABILIDADE CIVIL OU DE OUTRA FORMA, DECORRENTE DE, FORA DE OU EM CONEXÃO COM O SOFTWARE OU O USO OU OUTRAS NEGOCIAÇÕES NO SOFTWARE.

---

## ℹ️ Note on Button Configuration / Nota sobre a Configuração do Botão

🇺🇸 In previous basic Arduino projects, button inputs were configured using external pull-down resistors.  
In this project, we opted for using Arduino's internal pull-up resistors (`INPUT_PULLUP`) to simplify hardware wiring, improve stability, and eliminate the need for external components.

This change reflects a natural evolution toward cleaner and more efficient circuit design practices.

---

🇧🇷 Nota sobre a Configuração do Botão

Em projetos básicos anteriores de Arduino, as entradas de botão foram configuradas utilizando resistores de pull-down externos.  
Neste projeto, optamos por utilizar os resistores internos de pull-up do Arduino (`INPUT_PULLUP`) para simplificar a fiação do hardware, melhorar a estabilidade e eliminar a necessidade de componentes externos.

Essa mudança reflete uma evolução natural em direção a práticas de design de circuitos mais limpas e eficientes.

---

📧 alyssonbrunooliveirasantos@gmail.com
