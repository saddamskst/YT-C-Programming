#include <stdio.h>

int  factorial(int n)  {
	 if (n==1){
		return 1;
	}else {
		return (n * factorial(n-1));
	}
}

void main(){
    int x=factorial(5);
    printf("%d",x);
}
