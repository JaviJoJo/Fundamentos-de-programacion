#include <stdio.h>
const int MAX = 50;
void Lectura(int[][50], int, int);
void Traspuesta(int[][50], int[][50], int, int);
void Imprime(int[][50], int, int);
void main(void)
{
    int MAT[MAX][MAX], TRA[MAX][MAX];
    int FIL, COL;
    do
    {
        printf("Ingrese el numero de filas de la matriz: ");
        scanf("%d", &FIL);
    }
    while (FIL>MAX || FIL<1);
    do
    {
        printf("Ingrese el numero de columnas de la matriz: ");
        scanf("%d", &COL);
    }
    while (COL>MAX || COL<1);
    Lectura(MAT, FIL, COL);
    Traspuesta(MAT, TRA, FIL, COL);
    Imprime(TRA, COL, FIL);
}
void Lectura(int A[][50], int F, int C)
{
    int I, J;
    for (I=0; I<F; I++)
        for (J=0; J<C; J++)
        {
            printf("Ingrese el elemento %d %d: ", I + 1, J + 1);
            scanf("%d", &A[I][J]);
        }
}
void Traspuesta(int M1[][50], int M2[][50], int F, int C) {
    int I, J;
    for (I=0; I<F; I++)
        for (J=0; J<C; J++)
            M2[J][I] = M1[I][J];
}
void Imprime(int A[][50], int F, int C)
{
    int I, J;
    printf("\nLa traspuesta de la matriz es:\n");
    for (I=0; I<F; I++)
        for (J=0; J<C; J++)
            printf("\nElemento %d %d: %d", J + 1, I + 1, A[I][J]);
}
