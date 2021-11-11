#include <stdio.h>

long factorial(int n)
{
    //recursive
    if(n <= 1) return 1;
    else return n*factorial(n-1);
}

int main(void)
{
    long n;

    printf("Please enter a number: ");
    scanf("%d", &n);
    printf("%d!'s factorial is %d\n", n, factorial(n));
    
    return 0;
}