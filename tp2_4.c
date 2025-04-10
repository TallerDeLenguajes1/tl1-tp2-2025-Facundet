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

int main(void)
{
    //----GENERO NUMEROS ALEATORIOS----
    srand(time(NULL));
    char tipos[6][10] = {"Intel", "AMD", "Celeron", "Athlon", "Core", 
"Pentium"}; 
    struct compu computadoras[CANT_PC];

    for (int i = 0; i < CANT_PC; i++)
    {
        computadoras[i].velocidad = 1 + rand() % 3;
        computadoras[i].anio = 2015 + rand () % 10;
        computadoras[i].cantidad_nucleos = 1 + rand() % 8;

        int indice_aleatorio = rand () % 6;
        computadoras[i].tipo_cpu = tipos[indice_aleatorio];
    }
    
    for (int i = 0; i < CANT_PC; i++)
    {
        printf("PC %d:\n", i + 1);
        printf("Velocidad: %d Ghz\n", computadoras[i].velocidad);
        printf("Anio: %d\n", computadoras[i].anio);
        printf("Cantidad de nucleos: %d\n", computadoras[i].cantidad_nucleos);
        printf("Tipo: %s\n", computadoras[i].tipo_cpu);
        printf("---------------------\n");
    }
    



    


    getchar();
    getchar();
    return 0;
}