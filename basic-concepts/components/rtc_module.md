# RTC Module | Real-Time Clock DS3231 / DS1307

## ENGLISH

### Description
RTC modules maintain accurate date and time even when the main system is powered off.  
Essential for alarms, event logs, and data timestamping.

### How it works
- Tracks time and date using an internal clock.
- Powered by a coin cell battery (e.g., CR2032) when the system is off.
- Communicates with microcontrollers via the I2C protocol.

*(I2C protocol: A standard method where devices communicate using only two wires, SDA and SCL.)*

### Best Practices
- Replace the backup battery periodically to ensure reliability.
- Use libraries (like RTClib) for easier reading and writing of time data.
- Avoid frequent resets to protect EEPROM memory.

### Practical Notes
The DS3231 model is more accurate than DS1307 because it compensates internally for temperature variations.

---

## PORTUGUÊS

### Descrição
Módulos RTC mantêm a data e hora atualizadas mesmo quando o sistema principal está desligado.  
Essenciais para alarmes, registros de eventos e marcação de dados com horário.

### Como funciona
- Acompanha o tempo e a data usando um relógio interno.
- Alimentado por uma bateria tipo moeda (ex.: CR2032) quando o sistema está desligado.
- Comunica-se com microcontroladores via protocolo I2C.

*(Protocolo I2C: Método padrão em que dispositivos trocam dados usando apenas dois fios, SDA e SCL.)*

### Boas práticas
- Troque a bateria de backup periodicamente para manter a precisão.
- Utilize bibliotecas (como a RTClib) para facilitar a leitura e escrita dos dados de tempo.
- Evite fazer resets frequentes para preservar a memória EEPROM.

### Notas práticas
O modelo DS3231 é mais preciso do que o DS1307, pois realiza compensação interna de variações de temperatura.
