#include <stdio.h>

int main()
{
    int a, b;    
    printf("Enter number: ");
    scanf("%d", &a);
    if (a%5==0 && a%11==0)
    {
        printf("\n number is divisible by both 5 and 11");
    }
    else{
        printf("\n number is not divisible by both 5 and 11");
    }
    
}