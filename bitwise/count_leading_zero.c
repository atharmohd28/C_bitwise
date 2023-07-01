/* file name :count_leading_zero.c
 * Author : Mohd athar
 * Date :
 * Purpose : wap to count the leadind zero bit
 */

#include <stdio.h>

int count_lead(int );

int main()
{
    int num;
    printf("Enter your number :\n");
    scanf("%d",&num);

    printf("%d\n",count_lead(num));
    return 0;

}

int count_lead(int num)
{
    int count;
    int i;
    int msb;
    msb  = (1 << (32 - 1));
    count = 0;
    for( i = 0; i < 31; i++){
        if (( num << i) & msb){
            break;
        }
        count++;
    }
    return 0;
}
