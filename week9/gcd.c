#include<stdio.h>

static int gcd(int x, int y);
int main()
{
    printf("result of gcd(30,20) = %d\n", gcd(21,14));
}

int gcd(int x, int y)
{
    printf("x = %d, y = %d\n", x, y);
    if(y == 0)
        return x;
    else
        return gcd(y,x%y);
}

