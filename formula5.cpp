#include<stdio.h>
int main(){
	
	int a=20;
	int b=30;

	
    a=b+a;
    b=a-b;
    a=a-b;
	printf("a=%d\n",a);
	printf("b=%d\n",b);
}