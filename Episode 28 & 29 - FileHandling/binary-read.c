#include <stdio.h>

int main(){
    FILE *ptr;
    int data[5];
    int size=sizeof(data)/sizeof(data[0]);

    ptr=fopen("data.bin","rb");

    fread(data, sizeof(int), size, ptr);
    fclose(ptr);

    for(int i=0;i<size;i++){
        printf("%d ", data[i]);
    }

    printf("Data read from Binary File");
    return 0;
}