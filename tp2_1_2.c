#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N 20
// debo usar notacion indexada

int main(void)
{
    srand(time(NULL));

    int i;
    double vt[N];
    for (i = 0; i < N; i++)
    {
        *(vt + 1) = 1 + rand() % 100;
        printf("% f   ", *(vt + 1));
    }

    return 0;
}
