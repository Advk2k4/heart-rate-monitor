# Heart Rate Monitor using ESP32

This project reads and displays a user's heart rate in real-time using an ESP32 and a MAX30100 sensor.

## 🚀 Features

- Real-time heart rate monitoring
- Serial plotter support for waveform visualization
- Clean, modular code for easy extension
- Built using Arduino framework

## 🛠 Hardware Used

- ESP32 Dev Board
- MAX30100 Heart Rate Sensor
- Jumper wires, breadboard

## 📁 Folder Structure

```
heart-rate-monitor-esp32/
├── src/
│   └── heart_rate_monitor.ino
├── docs/
│   └── wiring_diagram.jpg
├── assets/
│   └── demo.gif
```

## 🔌 Wiring

| ESP32 Pin | MAX30100 Pin |
|-----------|--------------|
| 3.3V      | VCC          |
| GND       | GND          |
| SDA (GPIO 21) | SDA      |
| SCL (GPIO 22) | SCL      |

## 🔧 Setup

1. Install Arduino IDE
2. Install these libraries via Library Manager:
   - Adafruit MAX30100
   - Wire
3. Select the correct ESP32 board and port
4. Upload `heart_rate_monitor.ino` and open Serial Monitor at 115200 baud

## 📷 Demo

![Demo](assets/demo.gif)

## 📄 License

MIT
