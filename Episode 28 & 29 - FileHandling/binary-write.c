#include <stdio.h>

int main(){
    FILE *ptr;
    int data[]={10,20,30,40,50};
    int size=sizeof(data)/sizeof(data[0]);

    ptr=fopen("data.bin","wb");

    fwrite(data, sizeof(int), size, ptr);
    fclose(ptr);
    printf("Data Saved into Binary File");
    return 0;
}