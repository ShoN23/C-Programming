#include<stdio.h>
int main()
{
    int x,y,z;
    float a,b,c;

    x=10; y=4.5; z=x+y;
    printf("%d %d %d\n",x,y,z);

    a=10; b=4.5; c=a+b;
    printf("%f %f %f\n", a,b,c);

    x=5; y=10; z=++x + y++;
    printf("%d %d %d\n",x,y,z);

    return 0;
}