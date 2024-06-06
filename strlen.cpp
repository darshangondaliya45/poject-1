#include<stdio.h>
#include<string.h>
int main(){
	char a[50];
	printf("enter your name:-");
	scanf("%[^\n]s",&a);
	int l=strlen(a);
printf("%d\n",l);
for(int i=0;i<l;i++){
	printf("%c index : %d \n",a[i],i);
}
}
