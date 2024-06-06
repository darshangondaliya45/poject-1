#include<stdio.h>
#include<string.h>
int main(){
	int age;
	char a[50];
	printf("enter your name:-");
	scanf("%[^\n]s",&a);
	
	printf("enter your age :- ");
	scanf("%d",&age);
	
	
	if(age>18){
		printf("You Get A Vote.");
	}else{
		printf("Your Age is Not for vote.");
		
		
	}
}
