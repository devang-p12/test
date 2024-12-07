#include<stdio.h>
int main()
{
    float C,F;
    printf("enter the temparature in fahrenheit : ");
    scanf("%f",&F);
    C = (F - 32)*5/9;
    printf("temperature in celsius  : %f ",C);
    return 0;
}
