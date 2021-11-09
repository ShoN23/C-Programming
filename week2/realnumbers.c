#include<stdio.h>
int main()
{
    float num1,num2,num3,sum,average;
    printf("Enter number: ");
    scanf("%f", &num1);
    printf("Enter number: ");
    scanf("%f", &num2);
    printf("Enter number: ");
    scanf("%f", &num3);
    sum = num1+num2+num3;
    printf("Sum is %f", sum);
    average = (sum)/3;
    printf(" Average is %f\n", average);

    return 0;
}