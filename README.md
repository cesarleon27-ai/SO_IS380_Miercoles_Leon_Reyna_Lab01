# Laboratorio 01 - Gestión de Procesos y Prioridad

Repositorio correspondiente al curso de **Sistemas Operativos** de la Universidad Nacional de San Cristóbal de Huamanga (UNSCH).

## Autor
- **Estudiante:** Leon Reyna Cesar Antonio

## Descripción del Programa
El programa en C implementa una estructura `Proceso` que permite:
1. Registrar hasta 5 procesos mediante consola (PID, nombre y prioridad).
2. Utilizar una función con punteros (`buscarMayorPrioridad`) para encontrar de forma eficiente el proceso con el número de prioridad más bajo.
3. Mostrar en pantalla los datos detallados del proceso ganador que debe ejecutarse primero.

## Instrucciones de Compilación y Ejecución
Para compilar y ejecutar el código en un entorno Linux (o terminal Bash), siga estos comandos:

### 1. Compilar el código
gcc lab01.c -o lab01

### 2. Ejecutar el programa
./lab01
