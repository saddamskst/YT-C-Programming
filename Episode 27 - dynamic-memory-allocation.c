#include <stdio.h>
#include <stdlib.h>

void main(){
    int n,n1,*arr;
 
    printf("Enter the number of elements: ");
    scanf("%d",&n);

    arr=(int*)calloc(n,sizeof(int));

    for(int i=0;i<n;i++){
        arr[i]=i+1;
        printf("%d ",arr[i]);
    }

  printf("\nEnter the New number of elements: ");
    scanf("%d",&n1);

    arr=realloc(arr,n1*sizeof(int));

    for(int i=0;i<n1;i++){
        arr[i]=i+1;
        printf("%d ",arr[i]);
    }

    free(arr);
}