#include <stdio.h>

void add1(){ //1 , No , No
    int a=10;
    int b=20;
    printf("\n%d",a+b);
}


int add2(int a,int b){ //2 , with , with
    return(a+b);
}

int add3(int a,int b){ //3 , with , no
    printf("\n%d",a+b);
}

int add4(){ //4 , No , with
    int a=10;
    int b=80;
   return(a+b);
}


void main()
{

    add1();

    printf("\n%d",add2(50,9));

    add3(80,20);

    printf("\n%d",add4());
 printf("\nHello Saddam");
}