#include <stdio.h>

void main()
{
    int ivr;
    printf("Select Language from the Below options \n");

    printf("1. Hindi\n");
    printf("2. English\n");
    printf("3. Bengali\n");

    printf("Enter Your Choice :");
    scanf("%d", &ivr);

    switch (ivr)
    {
    case 1:
        printf("You have chosen Hindi");
        break;
    case 2:
        printf("You have chosen English");
        break;
    case 3:
        printf("You have chosen Bengali");
        break;

    default:
        printf("You have chosen incorrect option");
        break;
    }
}