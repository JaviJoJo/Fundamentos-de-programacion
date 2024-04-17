#include <stdio.h>

int main()
{
    float cantidad, interes, pago_mensual, saldo;
    int tiempo, i;
    char respuesta[3];
    printf("Ingrese la cantidad del prestamo: ");
    scanf("%f", &cantidad);
    printf("Ingrese la tasa de interes (en porcentaje): ");
    scanf("%f", &interes);
    printf("Ingrese la cantidad de meses para pagar: ");
    scanf("%d", &tiempo);

    interes /= 100.0;
    pago_mensual = cantidad * (interes / 12.0) / (1.0 - pow(1.0 + (interes / 12.0), -tiempo));
    saldo = cantidad;

    printf("\nTabla de Pagos Mensuales:\n");
    printf("Mes\tPago Mensual\tSaldo Restante\n");
    for (i = 1; i <= tiempo; i++)
        {
            float interes_mensual = saldo * (interes / 12.0);
            float principal_mensual = pago_mensual - interes_mensual;
            saldo -= principal_mensual;
            printf("%d\t%.2f\t\t%.2f\n", i, pago_mensual, saldo);
        }
    printf("\n¿Desea guardar esta tabla en un archivo de texto? (si/no): ");
    scanf("%s", respuesta);

    if (strcmp(respuesta, "si") == 0)
        {
        FILE *archivo;
        archivo = fopen("tabla_pagos.txt", "w");
        if (archivo != NULL)
            {
                fprintf(archivo, "Tabla de Pagos Mensuales:\n");
                fprintf(archivo, "Mes\tPago Mensual\tSaldo Restante\n");

                // Volver a calcular los pagos para guardarlos en el archivo
                saldo = cantidad;
                for (i = 1; i <= tiempo; i++)
                    {
                        float interes_mensual = saldo * (interes / 12.0);
                        float principal_mensual = pago_mensual - interes_mensual;
                        saldo -= principal_mensual;
                        fprintf(archivo, "%d\t%.2f\t\t%.2f\n", i, pago_mensual, saldo);
                    }
                fclose(archivo);
                printf("\nLa tabla se ha guardado en el archivo 'tabla_pagos.txt'.\n");
            } else
        {
            printf("\nError al abrir el archivo para guardar la tabla.\n");
        }
    }
    return 0;
}
