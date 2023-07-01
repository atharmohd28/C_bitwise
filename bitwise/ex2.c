/* file name : ex2.c
 * Author : Mohd Athar
 * Date :
 * Purpose
 */

#include <stdio.h>

int main(void)
{
    int i = 32;
    int j = 0x20;
    int k;
    int l;
    int m;
    k = i|j; //
    l = i&j; //
    m = k ^ l; //
    printf("%d %d %d %d %d\n", i, j, k, l, m);
    return 0;
}
