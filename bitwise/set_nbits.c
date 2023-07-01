/* file name : set_nbits.c
 * Author : Mohd Athar
 * Date : 22/10/2022
 * Purpose : Convert from Little to Big Endian
 */


#include <stdio.h>

 int  set_bits(int num, int pos)
{
    int res;
    res = ( num | ( 1 << pos));
    return res;
}

int main()
{
    unsigned int num;
    unsigned int pos;
    printf("Enter your number :\n");
    scanf("%d",&num);
    printf("Enter position of bits wants set \n");
    scanf("%d",&pos);
    printf("%u\n",set_bits(num,pos));
    return 0;
}
    
