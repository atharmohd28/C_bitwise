/* file name : set_nbit.c
 * Author : Mohd Athar
 * date :
 * Purpose : wap to given position bit make set bit (change the given number )
 */


#include <stdio.h>

int change_number(unsigned int ,unsigned int);

int main()
{
    unsigned int num;
    unsigned int pos;

    printf("Enter your number :\n");
    scanf("%d",&num);

    printf("Enter your pos(0-31) :\n");
    scanf("%d",&pos);

    printf("%d\n",change_number(num,pos));

    return 0;

}


int change_number(unsigned int num,unsigned int pos)
{
    unsigned int bitstatus;
    bitstatus = ( num | (1 << pos));
    return bitstatus;

}
