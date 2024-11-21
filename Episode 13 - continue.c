#include <stdio.h>

void main()
{

    int i = 1;
    while (i <= 5)
    {
        if (i == 2)
        {
            i++;
            continue;
        }

        printf("%d\n", i);
        i++;
    }
}