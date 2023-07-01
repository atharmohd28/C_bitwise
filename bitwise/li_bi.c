

/* file name : li_bi.c
 * Author : Mohd Athar
 * Date : 22/10/2022
 * Purpose : Convert from Little to Big Endian
 */

#include <stdio.h>

int main(void)
{
    unsigned int num;
    num = 0x11223344;
    unsigned int a1,a2,a3,a4,res = 0;
    printf("Beforer convert :%x\n",num);

    a1 = ((0x000000ff & num) << 24);
    a2 = ((0x0000ff00 & num) << 8);
    a3 = ((0x00ff0000 & num) >> 8);
    a4 = ((0xff000000 & num) >> 24);

    res = a1 | a2 | a3 | a4;
    printf("after convert : %x\n", res);
}
