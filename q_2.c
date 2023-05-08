#include<stdio.h>

int main(){
	
	int a = 1,n;
	
	printf("Enter a number : ");
	scanf("%d",&n);
	
	do{
		printf("%d X %d = %d\n",n,a,(a * n));
		a++;
	}
	while(a<=10);
	
	return 0;
}
