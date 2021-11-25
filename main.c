#include <stdio.h>
#include "malloc.h"
#include "String.h"
#include "math.h"

int i = 0, j = 0;

void main(void)
{
    printf("j++ is%d\r\n", j++);
    printf("++i is%d\r\n", ++i);
}