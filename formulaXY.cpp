#include<stdio.h>
int main(){

int x,y;

printf("enter x value:");
scanf("%d",&x);

printf("enter y value:");
scanf("%d",&y);
int sum =(x*x)+(2*x*y)+(y*y);
printf("your sum is %d",sum);
}