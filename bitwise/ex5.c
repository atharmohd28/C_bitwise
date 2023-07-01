/* file name : ex5.c
 * Author : Mohd Athar
 * Date : 28/10/2022
 * Purpose :
 */

#include <stdio.h>

void unsigned_data(size_t bytes)
{
    int bits = 8 * bytes;

    unsigned int val = ( ( ( 1 << (bits -1) ) - 1 ) + ( 1 << (bits -1)) );
    printf (" unsigned ->range is from %u to %u \n ", 0 , val);
}

void signed_data(size_t bytes)
{
    int bits = 8 * bytes;
    int str = -( 1 << (bits - 1));
    int end = ( 1 << (bits -1 )) -1;
    printf(" signed ->range is from %d to %d \n", str,end);

}


int main()
{
    printf("char unsigend range :\n");
    unsigned_data(sizeof(unsigned char));


    printf("char signed range: \n");
    signed_data(sizeof(char));


   printf( "####********#### \n");

   printf( " int unsigned range :\n");
   unsigned_data(sizeof(unsigned int));
    return 0;
}


