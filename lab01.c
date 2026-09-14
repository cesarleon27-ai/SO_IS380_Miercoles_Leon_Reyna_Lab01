#include <stdio.h>

struct Proceso {
    int pid;
    char nombre[20];
    int prioridad; // 1 (alta) a 5 (baja)
};
int main() {
    struct Proceso procesos[5];
    int i;

    for(i = 0; i < 5; i++) {
        printf("\n--- Proceso %d ---\n", i + 1);
        printf("Ingrese PID: ");
        scanf("%d", &procesos[i].pid);
        printf("Ingrese nombre: ");
        scanf("%s", procesos[i].nombre);
        printf("Ingrese prioridad (1-5): ");
        scanf("%d", &procesos[i].prioridad);
    }

    int pidBuscado;
    printf("\nIngrese el PID del proceso que desea buscar: ");
    scanf("%d", &pidBuscado);

    return 0;
}

