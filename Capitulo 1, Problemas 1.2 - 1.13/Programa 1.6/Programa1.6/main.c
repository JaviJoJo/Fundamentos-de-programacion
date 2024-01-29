#include <stdio.h>
void main(void)
{
    int i = 15, j, k, l;
    j = (15 > i --) > (14 < ++i);
    printf("\n El valor de J es: %d", j);
    k = !('b' != 'd') > (!i - 1);
    printf("\nEl valor de k es: %d", k);
    l = (!(34 > (70 % 2))||0);
    printf("\n El valor de L es: %d", l);
}
