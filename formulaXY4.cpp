#include<stdio.h>
int main(){
	
	int a=25;
	int b=30;
	int c;
	
	c=b;
	b=a;
	a=c;
	printf("a=%d\n",a);
	printf("b=%d\n",b);
}