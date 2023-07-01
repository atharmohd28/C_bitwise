/* file name :clear_nbit.c
 * Author : Mohd Athar
 * Date :
 * Purpose : wap to clear n given bits
 */


#include <stdio.h>

int clear_nbits(int ,int );

int main()
{
    int num;
    int pos;

    printf("Enter your number :\n");
    scanf("%d",&num);

    printf("Enter your pos(0-31) :\n");
    scanf("%d",&pos);

    printf("%d\n",clear_nbits(num,pos));

    return 0;
}


int clear_nbits(int num, int pos)
{
    int bitstatus;
    bitstatus = ( num & ( ~ ( 1 << pos)));
    return bitstatus;

}

