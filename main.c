#include <stdio.h>
#include "malloc.h"
#include "String.h"
#include "math.h"

int loop = 0;
void main(void)
{
    for (size_t i = 0; i < 10; i++)
    {
        for (size_t j = 0; j < 10; j++)
        {
            printf("%DX%d=%d", i, j, i * j);
        }
    }

    printf("this is test%d\r\n", loop);
    printf("j++ is%d\r\n", j++);
    printf("++i is%d\r\n", ++i);
}