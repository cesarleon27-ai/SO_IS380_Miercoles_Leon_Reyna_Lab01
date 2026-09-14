// Programa de gestion de procesos y prioridad en C
#include <stdio.h>

// Parte A: Estructura Proceso
struct Proceso {
    int pid;
    char nombre[20];
    int prioridad; // 1 (alta) a 5 (baja)
};

// Parte C: Funcion que recibe el arreglo por puntero y encuentra la mayor prioridad (menor numero)
struct Proceso* buscarMayorPrioridad(struct Proceso *procesos, int n) {
    int i;
    struct Proceso *ganador = &procesos[0];
    
    for(i = 1; i < n; i++) {
        if(procesos[i].prioridad < ganador->prioridad) {
            ganador = &procesos[i];
        }
    }
    return ganador;
}

int main() {
    struct Proceso procesos[5];
    int i;

    // Parte B: Registro de hasta 5 procesos
    for(i = 0; i < 5; i++) {
        printf("\n--- Proceso %d ---\n", i + 1);
        printf("Ingrese PID: ");
        scanf("%d", &procesos[i].pid);
        printf("Ingrese nombre: ");
        scanf("%s", procesos[i].nombre);
        printf("Ingrese prioridad (1-5): ");
        scanf("%d", &procesos[i].prioridad);
    }

    // Llamada a la funcion de la Parte C
    struct Proceso *procesoGanador = buscarMayorPrioridad(procesos, 5);

    // Parte D: Mostrar el resultado del proceso ganador ordenadamente
    printf("\n========================================\n");
    printf(" PROCESO GANADOR (EJECUTAR PRIMERO)\n");
    printf("========================================\n");
    printf("PID: %d\n", procesoGanador->pid);
    printf("Nombre: %s\n", procesoGanador->nombre);
    printf("Prioridad: %d\n", procesoGanador->prioridad);
    printf("========================================\n");

    return 0;
}
