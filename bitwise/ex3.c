/* file name : ex3.c
 * Author : Mohd AThar
 * Date :
 * Purpose :
 */


#include <stdio.h>

int main(void)
{
    int i = 4;
    int j = 8;
    printf("%d  %d %d\n", i|j & j|i, i|j && j|i, i^j);
    return 0;
}

// 12 1 12
