#include <stdio.h>

void main()
{
    int age;
    printf("Enter your Age : ");
    scanf("%d", &age);

    if (age > 18)
    {
        printf("You are Eligible for Vote");
    }
    else if (age < 10)
    {
        printf("You are Not Eligible for Vote");
    }
}