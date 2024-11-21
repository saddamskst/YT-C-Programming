// #include <stdio.h>

// void add(int *ptr){
//     ++(*ptr);
// }


// void main(){
//     int x=10;
//     int *y =&x;
//     add(&y); //11
//     printf("\n%d",*y); //11
//     printf("\n%d",++(*y)); //12
// }



#include <stdio.h>

void swap(int *num1 , int * num2){
    int temp;
    temp=*num1;
    *num1=*num2;
    *num2=temp;
}


void main(){
int a=4,b=50;

swap(&a,&b);

printf("\n Value of A is %d",a);
printf("\n Value of B is %d",b);

}