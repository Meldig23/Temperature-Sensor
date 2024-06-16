# Temperature-Sensor
A temperature Sensor made using Arduino and XBee to show communication over a distance

- We used an LM35 Temperature sensor to detect the temperature.
- It was connected to analog data pin of an XBee(End Device) and this XBee is wirelessly connected to another XBee
- This wireless connection is established by changing the Configuration Settings of both XBee using XCTU Software
- Now the co-ordinator XBee is connected to a laptop through an Arduino.
- By coding the Arduino we interpret the data received and display the temperature in the Laptop
- For detailed report , refer [here](./Temperature_sensor.pdf)
