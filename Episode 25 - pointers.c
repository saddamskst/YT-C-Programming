#include <stdio.h>

void main()
{

int x=10;
int *y =&x;
printf("\n%d",x);
printf("\n%d",&x);
printf("\n%d",y);

printf("\n%d",*y);
printf("\n%d",&y);


// int num=50;
// int * ptr;
// ptr=&num;
// printf("%d",*ptr);

}