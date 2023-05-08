#include<stdio.h>

int main(){
	
	char i;
	
	printf("Enter A to Z char : ",i);
	
	i = 'A';
	
	do{
		printf("%c\n",i);
		i++;
	}
	while(i<='Z');
	
	i = 'a';
	
	do{
		printf("%c\n",i);
		i++;
	}
	while(i<='z');
	
	return 0;
}
