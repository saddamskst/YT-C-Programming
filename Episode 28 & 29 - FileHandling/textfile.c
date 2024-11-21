// #include <stdio.h>
// #include <stdlib.h>

// void main(){
// int a=1454;

// FILE *ptr;

// ptr=fopen("demo.txt","w");


// fprintf(ptr,"The Number is %d",a);

// fclose(ptr);
// }


#include <stdio.h>
#include <stdlib.h>

void main(){
int a;

FILE *ptr;

ptr=fopen("demo.txt","r");

fscanf(ptr,"%d",&a);
printf("%d",a);
fclose(ptr);
}