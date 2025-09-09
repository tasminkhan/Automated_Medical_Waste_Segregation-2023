# Automated Smart Medical Waste Segregation System

[![Arduino](https://img.shields.io/badge/Arduino-00979D?style=flat&logo=Arduino&logoColor=white)](https://www.arduino.cc/)

An automated waste segregation system designed for medical facilities to efficiently sort waste into metallic, plastic, and organic categories using sensor technology and servo-controlled sorting mechanisms.

## Project Overview

This system addresses the critical need for proper medical waste management by automatically detecting and sorting different types of waste materials. The project focuses on healthcare applications where proper waste segregation is essential for safety and environmental compliance.

### Key Features

- **Multi-sensor Detection**: Uses capacitive, inductive, and ultrasonic sensors for waste identification
- **Automated V-Gate Sorting**: Servo motor-controlled mechanism for precise waste segregation
- **Smart Notifications**: Bluetooth-enabled system for waste bin level monitoring
- **Medical Focus**: Designed specifically for hospital and healthcare facility requirements
- **Sustainable Design**: Built with eco-friendly and cost-effective materials
- **Mobile Integration**: Companion app for real-time waste management alerts

## 🛠️ System Components

### Hardware
- **Microcontroller**: Arduino Uno
- **Sensors**: 
  - Capacitive proximity sensor (wet/organic waste detection)
  - Inductive proximity sensor (metal detection)  
  - 4x Ultrasonic sensors HC-SR04 (waste detection & bin level monitoring)
- **Actuators**: 2x TowerPro MG996R servo motors
- **Communication**: Bluetooth HC-05 module
- **Power**: 9V DC supply with step-down converter
- **Structure**: Laser-cut 4mm plywood frame, 3D printed components

### Software
- Arduino IDE for microcontroller programming
- SolidWorks for mechanical design
- Mobile app for notifications

## Performance Results

- **Detection Accuracy**: 90% (18/20 test samples)
- **Segregation Accuracy**: 80% (16/20 successful sorts)
- **Waste Categories**: Metal, Plastic, Organic/Biodegradable
- **Processing**: Real-time waste classification and sorting

## System Architecture

```
Waste Input → Ultrasonic Detection → Material Classification → V-Gate Sorting → Designated Bins
     ↓
Bin Level Monitoring → Bluetooth Alert → Mobile Notification
```

## How It Works

1. **Detection**: Ultrasonic sensor detects when waste is placed in the system
2. **Classification**: 
   - Metal waste: Both capacitive and inductive sensors detect
   - Organic/wet waste: Only capacitive sensor detects
   - Plastic waste: Neither sensor detects (default category)
3. **Sorting**: Servo motors control V-gate mechanism to direct waste to appropriate bin
4. **Monitoring**: Ultrasonic sensors in bins monitor fill levels
5. **Notification**: Bluetooth module sends alerts when bins reach 80% capacity

## Cost Analysis
**Total Project Cost**: 15,000 BDT (~$140 USD)

## Future Enhancements

- Integration of computer vision for improved detection
- Expansion to additional waste categories
- Central waste management dashboard

## References

This project builds upon established waste sorting principles and incorporates improvements for medical waste applications. 
- Instructables - [Automatic Waste Sorting Machine](https://www.instructables.com/Automatic-Waste-Sorting-Machine/)
- Ahmad, I., Mukhlisin, M., & Basri, H. (2016). Application of Capacitance Proximity Sensor for the Identification of Paper and Plastic from Recycling Materials.
- Wulandari, E. W. V. (2020). Waste segregator system design. IOP Conference Series: Materials Science and Engineering.
- Singh, N., Ogunseitan, O. A., & Tang, Y. (2022). Medical waste: Current challenges and future opportunities for sustainable management.

## 📄 License

This project is licensed under the MIT License - see the LICENSE file for details.
