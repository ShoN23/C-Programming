#include<stdio.h>
int main(void)
{
    double height, width, perimeter;
    printf("Enter rectangle's height: ");
    scanf("%lf", &height);
    printf("Enter rectangle's width: ");
    scanf("%lf", &width);
    perimeter = 2*(height+width);
    printf("Rectangle primeter is equal to %.2f\n", perimeter);
}