# TEMPERATURE MONITORING SYSTEM 

COMPANY: CODTECH IT SOLUTIONS

NAME: MEDIBOINA BANGARAM

INTERN ID: CITS221

DOMAIN: EMBEDDED SYSTEMS

DURATION: 6 WEEKS

MENTOR: NEELA SANTHOSH KUMAR

# PROJECT DESCRIPTION:

The Temperature Monitoring System is a fundamental embedded engineering project designed to accurately measure, process, and display environmental temperature data in real-time. Temperature variations significantly impact industries, automation systems, medical environments, and daily household appliances. Monitoring these fluctuations ensures system safety, efficiency, and automated control.
This project focuses on interfacing an analog/digital temperature sensor with a microcontroller to fetch continuous thermal data, process it via code, and deliver the output instantly to the user. To make the system highly practical and versatile, the design is structured to output data in two ways:
Serial Monitor: For real-time debugging and data logging inside an IDE.
LCD Display (Liquid Crystal Display): For standalone embedded applications where an independent, user-friendly visual interface is required.
By combining hardware simulation and physical programming, this project serves as a bridge between theoretical circuits and real-world smart automation.
# EDITOR PLATFORMS AND TOOLS:

## Tinkercad (Simulation Platform):
Tinkercad by Autodesk is a powerful, web-based 3D modeling and electronics simulation tool. For this project, Tinkercad served as the virtual laboratory. It allowed for the creation of the complete circuit layout without the risk of damaging physical components.
Advantages: It provides virtual breadboards, microcontrollers, precise sensor modules, and immediate simulation feedback. The interactive environment allows users to manually tweak temperature values on the sensor during simulation to observe how the code and hardware react dynamically.
##Arduino IDE (Development & Programming Tool):
The Arduino Integrated Development Environment (IDE) is the software core used to write, compile, and upload code to the microcontroller.
Advantages: Written in C/C++, it features a highly intuitive environment with pre-built libraries (such as LiquidCrystal.h). While Tinkercad was used to test the code via virtual simulation, the Arduino IDE stands as the professional tool used to compile the final script, manage baud rates for serial communication (9600 \text{ bps}), and upload the logic to physical hardware.

## HARDWARE COMPONENTS:

Arduino Uno R3: Acts as the central processing microcontroller board.
TMP36 Temperature Sensor: Captures environmental thermal changes and sends equivalent voltage signals.
16x2 LCD Display: Provides a hardware-level visual display for real-time readings.
Resistor (220 \Omega): Protects the LCD backlight LED from overcurrent.
Breadboard & Jumper Wires: For neat circuit layout routing.
Working Logic
The TMP36 Sensor reads the ambient temperature and feeds an analog voltage signal to the Arduino's analog pin A0.
The Arduino converts this raw signal into degrees Celsius  and Fahrenheit using pre-defined mathematical calibrations in the code.
The finalized temperature metrics are printed dynamically on the 16x2 LCD Screen and logged simultaneously onto the Serial Monitor at a baud rate of 9600  looping every 1 .

## CONCLUSION:

Conclusion
The successful implementation of the Temperature Monitoring System demonstrates how effectively software and hardware integrate to solve real-world problems. Utilizing Tinkercad allowed for a risk-free, precise circuit design environment, while the Arduino IDE provided robust code compilation and debugging logic. The system effectively achieved its core objective: reading ambient temperature shifts via the TMP36 sensor and delivering accurate, real-time visual readouts on both the 16x2 LCD and the Serial Monitor. This foundational setup successfully meets all internship deliverables and can be easily expanded into automated cooling, fire alarms, or advanced cloud-based IoT weather stations.
