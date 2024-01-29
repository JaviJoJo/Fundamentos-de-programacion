#include <stdio.h>
void main(void)
{
    int i = 5, j =4, k, l, m;
    k = !i * 3 + --j * - 3;
    printf("\n El valor de l es: ", k);
    l = !(!i||1 && 0) && 1;
    printf("\n El valor de k es: ", l);
    m = (k = (!(12>10)), j = (10||0) && k, (!(k||j)));
    printf("\n El valor de M es: %d", m);
}
