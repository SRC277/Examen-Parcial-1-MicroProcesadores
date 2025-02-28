# Examen Práctico P1 - Programación de Microprocesadores

## Universidad Autónoma de Tamaulipas  
**Materia:** Programación de Microprocesadores  
**Docente:** López Piña Daniel  
**Fecha:** 27/02/2025  

### Integrantes del equipo:
- Leonardo Ramos Espinoza  
- Daniel Turrubiates Cervantes  
- Sebastián Rodela Castillo  
- Jorge Alejandro Quiroga Hoy  
- Marco Antonio Rojas Olvera  

---

## Descripción del proyecto
Este proyecto consiste en la implementación de un sistema con el microcontrolador **PIC16F877A**, donde se programaron cuatro LEDs para encenderse de forma secuencial. Se documenta todo el proceso desde la selección de componentes hasta la programación y prueba del circuito.

### **1. Selección de Componentes**  
**Responsable:** Leonardo Ramos Espinoza  
Se seleccionaron los siguientes componentes para la realización del circuito:
- **Microcontrolador:** PIC16F877A  
- **LEDs:** Azul, 2 verdes y amarillo  
- **Resistencias:** 4 de 220Ω  
- **Protoboard**  
- **Cableado de conexión**  
- **Grabador de microcontrolador**  
- **Entrenadora**  

### **2. Ensamblaje del Circuito**  
**Responsable:** Daniel Turrubiates Cervantes  
Se realizaron las conexiones del circuito:
- Se conectaron los pines **RB0 a RB3** del microcontrolador a los LEDs mediante resistencias de 220Ω.
- Se alimentó el PIC con **5V**.

### **3. Programación del Microcontrolador**  
**Responsable:** Sebastián Rodela Castillo  
Se desarrolló un código en lenguaje C que controla los LEDs para que se enciendan y apaguen de forma secuencial con un retraso de 1 segundo. El código realiza lo siguiente:
1. Configura todos los puertos del PIC como salidas.
2. Apaga todos los LEDs al inicio.
3. En un bucle infinito, enciende los LEDs y los apaga con un retraso de **1 segundo**.

### **4. Grabación del Programa en el PIC**  
**Responsable:** Marco Antonio Soria Ortiz  
Se utilizó el software **MasterProg** para grabar el código en el PIC16F877A. Una vez grabado, se verificó que el programa estuviera correctamente almacenado en la memoria del microcontrolador.

### **5. Pruebas del Circuito**  
**Responsable:** Jorge Alejandro Quiroga Hoy  
Se realizaron pruebas para confirmar que los LEDs encendieran de forma secuencial. Se verificó la alimentación y la correcta conexión del circuito.

### **6. Documentación del Proyecto**  
**Responsable:** Marco Antonio Rojas Olvera  
Se documentó todo el proceso llevado a cabo, incluyendo selección de componentes, ensamblaje, programación y pruebas del sistema.

---

## **Conclusión**
Se logró implementar con éxito un sistema basado en el **PIC16F877A** para controlar LEDs mediante programación en C. Se comprobó que el circuito funciona correctamente, cumpliendo con los objetivos del examen práctico.

Este proyecto sirvió para reforzar conocimientos sobre:
- Conexiones básicas de microcontroladores.
- Programación en lenguaje C para PIC.
- Uso de software para programación de microcontroladores.
- Ensamblaje y prueba de circuitos electrónicos.

