# DHT11 | Temperature and Humidity Sensor

## ENGLISH

### Description
The DHT11 sensor measures both temperature and relative humidity.  
It’s widely used in weather stations, greenhouse monitoring, and smart home systems.

### How it works
- Communicates digitally with microcontrollers (not analog).
- Measures temperature (°C) and relative humidity (%).

*(Digital communication: Instead of varying voltage, the sensor sends numbers representing the temperature and humidity.)*

### Best Practices
- Use a pull-up resistor (4.7kΩ–10kΩ) on the data line.
- Avoid reading more than once every 2 seconds.
- Keep the sensor away from heaters or cold air streams for accurate readings.

### Practical Notes
Readings may vary slightly during the first few minutes after powering up (sensor warm-up period).

---

## PORTUGUÊS

### Descrição
O sensor DHT11 mede tanto a temperatura quanto a umidade relativa do ambiente.  
É amplamente utilizado em estações meteorológicas, monitoramento de estufas e sistemas de casas inteligentes.

### Como funciona
- Comunica-se digitalmente com microcontroladores (não é analógico).
- Mede temperatura (°C) e umidade relativa (%).

*(Comunicação digital: Em vez de variar a tensão, o sensor envia números que representam temperatura e umidade.)*

### Boas práticas
- Utilize um resistor pull-up (4,7kΩ–10kΩ) na linha de dados.
- Evite fazer leituras com intervalos menores que 2 segundos.
- Instale o sensor longe de aquecedores ou correntes de ar frio para maior precisão.

### Notas práticas
As leituras podem apresentar pequenas variações nos primeiros minutos após a alimentação (tempo de aquecimento do sensor).
