#include <stdio.h>
int mad(int);
void main(void)
{
    int NUM, RES;
    printf("\n Ingresa el numero: ");
    scanf("%d", &NUM);
    RES = mad(NUM);
    printf("\n El mayor divisor de %d es: %d", NUM, RES);
}
int mad(int N1)
{
    int I = (N1/2);
    while (N1 % I)
        return I;
}
