#include<stdio.h>
int main()
{
    char c1 = 'A';
    char c2 = 65;
    char c3;

    c3 = 'A' + 2;

    printf("%c %c %c\n",c1,c2,c3);
    printf("%d %d %d\n",c1,c2,c3);
    printf("%02x %02x %02x\n",c1,c2,c3);

    return 0;

}