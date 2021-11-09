#include<stdio.h>

int main(void)
{
    int x = 10;
    int y = 010;
    int z = 0x10;

    printf(" x-10진수 = %d, x-16진수 = %08x\n ",x,x);
    printf(" y-10진수 = %d, y-16진수 = %08x\n",y,y);
    printf(" z-10진수 = %d, z-16진수 = %08x\n",z,z);

    printf(" \n\n ");
    printf(" x-10진수 = %d, x-16진수 = %08x\n",x,x);
    printf("(-x)-10진수 = %d, (-x)-16진수 = %08x\n", -x,-x);

    return 0;
}