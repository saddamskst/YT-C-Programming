#include <stdio.h>

void main()
{
    int i = 1;

data:
    printf("%d\n", i); // 1,2
    i++;               // 2,3

    if (i <= 1000)
    {
        goto data;
    }
}