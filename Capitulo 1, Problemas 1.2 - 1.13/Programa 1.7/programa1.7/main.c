#include <stdio.h>
void main(void)
{
    float PIE, LIB, MET, KIL;
    printf("Ingrese los datos del objeto: ");
    scanf("%f %f", &PIE, &LIB);
    MET = PIE * 0.09290;
    KIL = LIB * 0.45359;
    printf("\n Datos del objeto \n Longitud: %5.2f \t Peso: %5.2f", MET, KIL);
}
