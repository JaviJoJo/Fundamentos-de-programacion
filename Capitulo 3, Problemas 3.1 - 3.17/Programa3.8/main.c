#include <stdio.h>
void main(void)
{
    int I, NUM;
    long FAC;
    printf("\nIngrese el numero: ");
    scanf("%d", &NUM);
    if (NUM >= 0)
    {
        FAC = 1;
        for (I=1; I <= NUM; I++)
            FAC *= I;
        printf("\n El factorial de %d es: %1d", NUM, FAC);
    }
    else
        printf("\n Error en el dato ingresado");
}
