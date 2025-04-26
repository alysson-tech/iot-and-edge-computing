# Reed Switch | Magnetic Door/Window Sensor

## ENGLISH

### Description
A reed switch is a small electrical component that closes its contacts when exposed to a magnetic field.  
Commonly used for door and window open detection.

### How it works
- Normally open (NO) contacts close when a magnet approaches.
- Can connect directly to a digital input pin.

*(Simple digital behavior: Open = no signal; Magnet near = signal ON.)*

### Best Practices
- Place the magnet very close to the reed switch (within a few millimeters).
- Use a pull-up or pull-down resistor if necessary to stabilize the signal.
- Debounce the signal in code to avoid false triggers.

### Practical Notes
Always test the specific distance between your magnet and reed switch to ensure reliable operation in your design.

---

## PORTUGUÊS

### Descrição
O reed switch é um pequeno componente elétrico que fecha seus contatos quando exposto a um campo magnético.  
É usado principalmente para detectar abertura de portas e janelas.

### Como funciona
- Contatos normalmente abertos (NA) fecham quando um ímã se aproxima.
- Pode ser ligado diretamente a um pino de entrada digital.

*(Comportamento digital simples: Aberto = sem sinal; Ímã próximo = sinal ativado.)*

### Boas práticas
- Posicione o ímã muito próximo do reed switch (poucos milímetros).
- Utilize resistor de pull-up ou pull-down, se necessário, para estabilizar o sinal.
- Implemente debounce no código para evitar falsos acionamentos.

### Notas práticas
Sempre teste a distância ideal entre seu ímã e o reed switch para garantir o acionamento confiável no projeto.
