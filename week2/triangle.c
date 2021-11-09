#include<stdio.h>
int main()
{
    float base, height, area;
    printf("Enter base: ");
    scanf("%f", &base);
    printf("Enter height: ");
    scanf("%f", &height);
    area=0.5*height*base;
    printf("Are is equal to %f\n", area);

    return 0;
}