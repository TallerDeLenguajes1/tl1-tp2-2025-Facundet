#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define CANT_PC 5

struct compu
{
    int velocidad;
    int anio;
    int cantidad_nucleos;
    char *tipo_cpu;
};

void listarPCs(struct compu pcs[], int cantidad);
void mostrarMasVieja(struct compu pcs[], int cantidad);
void mostrarMasVeloz(struct compu pcs[], int cantidad);

int main(void)
{
    //----GENERO NUMEROS ALEATORIOS----
    srand(time(NULL));
    char tipos[6][10] = {"Intel", "AMD", "Celeron", "Athlon", "Core", "Pentium"};

    //-----ALMACENAMIENTO DE DATOS-----
    struct compu computadoras[CANT_PC];

    for (int i = 0; i < CANT_PC; i++)
    {
        computadoras[i].velocidad = 1 + rand() % 3;
        computadoras[i].anio = 2015 + rand() % 10;
        computadoras[i].cantidad_nucleos = 1 + rand() % 8;

        int indice_aleatorio = rand() % 6;
        computadoras[i].tipo_cpu = tipos[indice_aleatorio];
    }

    listarPCs(computadoras, CANT_PC);
    mostrarMasVieja(computadoras, CANT_PC);

    getchar();
    getchar();
    return 0;
}

void listarPCs(struct compu computadoras[], int cantidad)
{

    for (int i = 0; i < cantidad; i++)
    {
        printf("PC %d:\n", i + 1);
        printf("Velocidad: %d Ghz\n", computadoras[i].velocidad);
        printf("Anio: %d\n", computadoras[i].anio);
        printf("Cantidad de nucleos: %d\n", computadoras[i].cantidad_nucleos);
        printf("Tipo: %s\n", computadoras[i].tipo_cpu);
        printf("---------------------\n");
    }
}

void mostrarMasVieja(struct compu computadoras[], int cantidad)
{
    int masAntigua = 50000;
    for (int i = 0; i < cantidad; i++)
    {
        if (computadoras[i].anio < masAntigua)
        {
            masAntigua = computadoras[i].anio;
        }
    }
    for (int j = 0; j < cantidad; j++)
    {
        if (masAntigua == computadoras[j].anio)
        {
            printf("La computadora mas antigua es del anio: %d\n", computadoras[j].anio);
            printf("Velocidad: %d GHz\n", computadoras[j].velocidad);
            printf("Cantidad de nucleos: %d\n", computadoras[j].cantidad_nucleos);
            printf("Tipo: %s\n", computadoras[j].tipo_cpu);
        }
    }
}

void mostrarMasVeloz(struct compu pcs[], int cantidad);