// Task
// >90 Excellent
// >80 Very Good
// >70 Good
// >60 Average
// <60 Fair

#include <stdio.h>

void main()
{
    int marks;
    printf("Enter your Marks :");
    scanf("%d", &marks);

    if (marks >= 90)
    {
        printf("Excellent");
    }
    else if (marks >= 80)
    {
        printf("Very Good");
    }
    else if (marks >= 70)
    {
        printf("Good");
    }
    else if (marks >= 60)
    {
        printf("Average");
    }
    else if (marks < 60)
    {
        printf("Fair");
    }
}