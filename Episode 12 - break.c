#include <stdio.h>

void main()
{
    int i = 1;
    while (i <= 5)
    {
        if (i == 4)
        {
            break;
        }
        printf("\n%d", i);
        i++;
    }
}