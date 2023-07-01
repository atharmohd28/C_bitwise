/* file name : msb_set_check.c
 * Author : Mohd Athar
 * Date :
 * purpose : msb is set or not
 */


#include <stdio.h>

void msb_set(int);

int main()
{
    int num;
    printf("Enter your number :\n");
    scanf("%d",&num);
    msb_set(num);
    return 0;

}

void msb_set(int num)
{
    if ( num & ( 1 << 31))
        printf("msb is set \n");
    else
        printf("msb is not set\n");
}




