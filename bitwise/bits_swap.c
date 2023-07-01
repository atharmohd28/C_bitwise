/*
 file name : bits_swap.c
Author : Mohd AThar
DAte :
Purpose :     wap to 0xA1B2
                    o/p - B2A1

*/

#include <stdio.h>

unsigned short int change(unsigned short int);

int main(void)
{
    unsigned short int num;
    scanf("%hx",&num);

    printf("%hx", change(num));
}

unsigned short int change(unsigned short int num)
{
    num = ((num >> 8) | ( num << 8));

    return num;
}
