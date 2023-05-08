#include <stdio.h>

int main()
{
    int n, sum=0, a, b;

    printf("Enter a number : ");
    scanf("%d", &n);
    
    b = n % 10;
    
    a = n;

    while(n >= 10)
    {
        n = n / 10;
    }
    a = n;


    sum = a + b; 

    printf("Sum = %d", sum);

    return 0;
}
