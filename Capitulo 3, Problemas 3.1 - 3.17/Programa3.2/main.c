#include <stdio.h>
void main(void)
{
    int I, N, NUM, SUM;
    SUM = 0;
    printf("Ingrese el numero de datos:\t");
    scanf("%d", &N);
    for (I=1; I<=N; I++)
    {
        printf("ingrese el dato numero %d:\t", I);
        scanf("%d", &NUM);
        if (NUM > 0)
            SUM = SUM + NUM;
    }
    printf("\nLa suma de los numero positivos es: %d", SUM);
}
