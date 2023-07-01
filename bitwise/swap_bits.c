/* file name : swap_bits.c
 * Author : Mohd Athar
 * Date : 22/10/2022
 * Purpose : Convert from Little to Big Endian
 */



#include<stdio.h>

int main()
{
    unsigned int num;

    unsigned int a,b,c,d,w,x,y,z;
    unsigned int new;
    unsigned int newnum;
    unsigned int result;

    num=0x12345678;
    a=num>>28;
    b=num<<28;
    c=( ( ( num << 8) >> 28 ) << 8 );
    d=( ( ( num>>8) << 28 ) >> 8 );
    new = a | b | c | d;

    w=( ( ( num << 4 ) >> 28 ) << 24 );
    x=( ( ( num << 12 ) >> 28 ) << 16);
    y=( ( ( num << 16 ) >> 28 ) << 12 );
    z=( ( ( num >> 4 ) << 28 ) >> 24 );
    newnum = w | x | y | z;
    result = new | newnum;
    printf( "number = %x\n ", num);
    printf( "result=%x\n", result);




}
