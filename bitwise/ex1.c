/*file name : ex1.c
 * Author : Mohd Athar
 * Date : 31/08/2022
 * Purpose : understanding of bitwise oprater
 */

#include <stdio.h>


int main(void)
{
    int a;
    a = 4;
    int b;
    b = 0;
    printf("True:%d\n", a | b);
    printf("False:%d\n", a & b);
    return 0;
}


