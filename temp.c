#include<stdio.h>
int main()
{
    float C,F;
    printf("enter the temparature in celsius : ");
    scanf("%f",&C);
    F = (1.8 * C) + 32;
    printf("temperature in fahrenheit : %f ",F);
    return 0;
}
