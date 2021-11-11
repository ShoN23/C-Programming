#include<stdio.h>

int sub(int x);
int a,b;

int main()
{
    int a; int x, y;
    a = 5; x = 15; y = 45;
    printf("Main 1: a = %d, b = %d, x = %d, y = %d\n", a, b, x, y);
    y = sub(x);
    printf("Main 1: a = %d, b = %d, x = %d, y = %d\n", a, b, x, y);
}
int sub(int x)
{
    int y;
    y = x + 200;
    printf("Sub 1: a = %d, b = %d, x = %d, y = %d\n", a, b, x, y);
    a = 3; b = 37; x = 27;
    printf("Sub 2: a = %d, b = %d, x = %d, y = %d\n", a, b, x, y);
    return(400);
}