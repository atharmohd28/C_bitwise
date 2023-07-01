/*file name : check_end.c
 * Author : Mohd Athar
 * Date :
 * Purpose : check Endianess our system which endianess dippend
 */



#include <stdio.h>
#include <inttypes.h>

int main(void)
{
    uint32_t data;
    uint8_t *cptr;

    data = 1;  //Assign data
    cptr = (uint8_t *)&data;  //Type cast

    if (*cptr == 1)
    {
        printf("little-endiann\n");
    }
    else if (*cptr == 0)
    {
        printf("big-endiann\n");
    }
    return 0;
}
