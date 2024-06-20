#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    srand(time(NULL));
    int numero1 = rand() % 41;
    int numero2 = rand() % 41;
    int cantidadNumeros;
    int numeroUsuario1, numeroUsuario2 = -1;
    float cantidadDinero;
    printf("Bienvenido a la loteria!\n");
    printf("Cuantos numeros deseas jugar? (1 o 2): ");
    scanf("%d", &cantidadNumeros);
    printf("Introduce tu primer numero (entre 0 y 40): ");
    scanf("%d", &numeroUsuario1);
    if (cantidadNumeros == 2)
        {
        printf("Introduce tu segundo numero (entre 0 y 40): ");
        scanf("%d", &numeroUsuario2);
        }
    printf("Introduce la cantidad de dinero que deseas jugar: ");
    scanf("%f", &cantidadDinero);

    int gano = 0;
    if (cantidadNumeros == 1)
        {
        if (numeroUsuario1 == numero1 || numeroUsuario1 == numero2)
        {
            gano = 1;
        }
        }
    else if (cantidadNumeros == 2)
        {
        if ((numeroUsuario1 == numero1 && numeroUsuario2 == numero2) ||
            (numeroUsuario1 == numero2 && numeroUsuario2 == numero1))
            {
            gano = 1;
            }
    }
    if (gano)
    {
        float premio = cantidadDinero * 10;
        printf("Felicidades! Has ganado $%.2f.\n", premio);
    } else
    {
        printf("Suiiiin avanica! Se guallo compai!, .\n");
    }

    printf("Los numeros ganadores eran %d y %d.\n", numero1, numero2);

    return 0;
}
