# Buzzer | Buzzer Piezoeléctrico

## ENGLISH

### Description
The buzzer is a simple sound-emitting component that generates a tone when voltage is applied.  
Piezo buzzers are commonly used for alarms, notifications, and warnings in electronic circuits.

### How it works
- Applying voltage causes a piezoelectric element inside the buzzer to vibrate and produce sound.
- Some buzzers generate a constant tone; others can be controlled via PWM (Pulse Width Modulation), which is a method of rapidly switching ON and OFF to control the energy delivered and vary sound tones.

### Best Practices
- Use a resistor (e.g., 100Ω–330Ω) in series if needed to limit current.
- Verify the voltage rating (common 5V buzzers for Arduino).
- Pay attention to polarity: positive (longer leg) and negative (shorter leg).

### Practical Notes
Using PWM, you can create different beeps, pulses, or even simple melodies by controlling the switching frequency and duty cycle.

---

## PORTUGUÊS

### Descrição
O buzzer é um componente simples que emite som quando uma tensão é aplicada.  
Buzzers piezoelétricos são amplamente usados em alarmes, notificações e avisos em circuitos eletrônicos.

### Como funciona
- A aplicação de tensão faz um elemento piezoelétrico vibrar, gerando som.
- Alguns buzzers produzem um tom fixo; outros podem ser controlados por PWM (Modulação por Largura de Pulso), que é uma técnica de alternar rapidamente entre ligado e desligado para controlar a energia entregue e variar os tons do som.

### Boas práticas
- Use um resistor (ex.: 100Ω–330Ω) em série para limitar a corrente, se necessário.
- Verifique a tensão do buzzer (os mais comuns para Arduino são de 5V).
- Atenção à polaridade: positivo (perna longa) e negativo (perna curta).

### Notas práticas
Utilizando PWM, é possível criar diferentes padrões de sons, pulsos ou até melodias simples, controlando a frequência e o ciclo de trabalho do sinal enviado ao buzzer.
