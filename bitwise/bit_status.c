/* file name : bit_status
 * Autor : Mohd Athar
 * Date :
 * purpose : wap to to check stauts of given position bits that is set or reset
 */


#include <stdio.h>

void check_bit( int, int );


int main()
{
    int num;
    int pos;
    printf("Enter your number :\n");
    scanf("%d",&num);

    printf("Enter your pos to (0-31):\n");
    scanf("%d",&pos);

    check_bit(num,pos);
    return 0;

}

void check_bit( int num,int pos)
{
    if (( num >> pos) & 1)
        printf("this is set bit \n");
    else
        printf("this is reset bit \n");
}


