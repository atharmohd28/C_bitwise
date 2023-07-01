/* file name : clear_nbits.c
 * Author : Mohd Athar
 * Date : 22/10/2022
 * Purpose : Convert from Little to Big Endian
 */


#include <stdio.h>

 int  clear_bits(int num, int pos)
{
    int res;
    res = ( num ^ ( 1 << pos));
    return res;
}

int main()
{
    unsigned int num;
    unsigned int pos = 0;
   
    printf("Enter your number :\n");
    scanf("%d",&num);
    printf("Enter position of bits wants set \n");
    scanf("%d",&pos);
    //res = ( num | ( 1 << pos ));
    printf("%u\n",clear_bits(num,pos));
    return 0;
}
    
