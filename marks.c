#include<stdio.h>     
#include<string.h>

float pr(int sum,int sub){
	return(float)sum/sub;
}

int main(){
	
	char name[50];
	
	printf("enter your name: ");
	gets(name); 
	printf("\n");
	char subject[4][10]= {"Math","Science","Gk","Hindi"};
	int sub = 4;
	int marks[50];
	int sum = 0;
	float percentage;
	
	for(int i=0; i<4; i++){
		printf("%s: ",subject[i]);
		scanf("%d",&marks[i]);
		sum += marks[i];  
	}
	
	printf("\n");
	
  	printf("%s your total marks are %d\n",name,sum);
	printf("\n");	
	
	percentage = pr(sum,sub);
	
	printf("you got %.2f%% percentage\n",percentage);
	printf("\n");
	
		if(percentage < 35){
			printf("%s you are fail\n",name);
		}else{
			printf("%s you are pass\n",name);
			printf("\n");
			if(percentage > 35 && percentage < 55){
				printf("%s you got grade D",name);
			}else if(percentage > 55 && percentage < 75){
				printf("%s you got grade C",name);
			}else if(percentage > 75 && percentage < 85){
				printf("%s you got grade B",name);
			}else if(percentage > 85 && percentage < 100){
				printf("%s you got grade A",name);
			}
		}
		
		
}