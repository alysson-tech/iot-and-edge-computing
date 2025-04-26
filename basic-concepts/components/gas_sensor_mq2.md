# Gas Sensor MQ-2 | Smoke and Gas Detector

## ENGLISH

### Description
The MQ-2 sensor detects gases such as LPG, methane, butane, hydrogen, and smoke.  
It is widely used in fire detection systems and gas leak alarms.

### How it works
- Produces an analog voltage that varies with gas concentration.
- Requires a short warm-up period after powering on.

*(Analog signal: The output voltage changes continuously depending on gas presence, unlike digital sensors.)*

### Best Practices
- Use analogRead() for continuous monitoring.
- Calibrate the sensor in a clean air environment for more reliable thresholds.
- Consider environmental factors like temperature and humidity for accurate readings.

### Practical Notes
For critical systems, allow the sensor to stabilize for 24–48 hours after first use for maximum sensitivity.

---

## PORTUGUÊS

### Descrição
O sensor MQ-2 detecta gases como GLP, metano, butano, hidrogênio e fumaça.  
É amplamente utilizado em sistemas de detecção de incêndios e alarmes de vazamento de gás.

### Como funciona
- Gera uma tensão analógica que varia conforme a concentração de gás.
- Requer um breve período de aquecimento após ser ligado.

*(Sinal analógico: A tensão de saída muda continuamente conforme a presença de gases, diferente dos sensores digitais.)*

### Boas práticas
- Utilize a função analogRead() para monitoramento contínuo.
- Calibre o sensor em ambiente de ar limpo para melhores resultados.
- Considere fatores ambientais como temperatura e umidade para maior precisão.

### Notas práticas
Em aplicações críticas, permita que o sensor estabilize por 24 a 48 horas após o primeiro uso para máxima sensibilidade.
