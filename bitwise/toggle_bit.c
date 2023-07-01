/* file name : toggle_bits.c
 * Author : Mohd Athar
 * Date :
 * Purpose : wap to toggle given bits
 */


#include <stdio.h>

int toggle(int, int);

int main()
{
    int num;
    int pos;
    printf("Enter your number :\n");
    scanf("%d",&num);
    
    printf("Enter your pos(0-31):\n");
    scanf("%d",&pos);

    printf("%d\n ",toggle(num,pos));

    return 0;
}

int toggle(int num, int pos)
{
    int change_num;
    change_num = ( num ^ ( 1 << pos));
    return change_num;
}

