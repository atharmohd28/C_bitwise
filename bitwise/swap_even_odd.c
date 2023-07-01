/*
 file name : swap_bit_even_odd.c
Author : Mohd Athar
Date :
Purpose : Wap to implement the in a given number swap the bits even to odd
*/

#include <stdio.h>
#include <stdlib.h>

unsigned int bits(unsigned char);

int main(int argc, char *argv[])
{
    if (argc != 2)
    {
        perror ("Mismatched Arguments");
        exit(1);
    }
    
    printf("%d\n",bits(atoi(argv[1])));
}

unsigned int bits ( unsigned char num)
{
    int res = 0;
    int m = (num & 0xAA);
    m = m >> 1;
    int n = ( num & 0x55);
    n = n << 1;
    res = m | n;
    return res;
}

