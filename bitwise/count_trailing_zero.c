/* file name :trailing_zero.c
 Author : Mohd Athar
 date : 
 Purpose : wap to count trailing zero
 */

#include <stdio.h>

int trailing_zero(int);

int main()
{
    unsigned int num;
    printf("Enter your number :\n");
    scanf("%d",&num);

    printf("%d\n",trailing_zero(num));
    return 0;

}

int trailing_zero(int num)
{
    int count;
    int i;
    count = 0;

    for ( i = 0; i < 31; i++){
        if (( num >> i ) & 1){
            break;
        }
        count++;
    }
    return count;
}

