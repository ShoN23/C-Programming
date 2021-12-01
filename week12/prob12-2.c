#include<stdio.h>

int main(void)
{
    char name[100];
    char address[100];
    printf("Enter a name:");
    gets(name);
    printf("Please enter your current address:");
    gets(address);
    puts(name);
    puts(address);

    return 0;
}