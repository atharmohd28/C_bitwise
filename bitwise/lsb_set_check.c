/* file name : lsb_set.c
 * Author : Mohd Athar
 * Date : 
 * purpose :
 */

#include <stdio.h>

void *lsb(int);
int main()
{
    int num;
    printf("Enter your number :\n");
    scanf("%d",&num);
    lsb(num);
    return 0;
}

void *lsb(int num)
{
    if( num & 1 )
        printf("lsb is set \n");
    else
        printf("lsb is not set \n ");
}

