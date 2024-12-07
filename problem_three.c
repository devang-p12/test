#include <stdio.h>

int main()
{
    int a , b , c;
    printf("Enter First number: ");
    scanf("%d", &a);
    printf("Enter Second number: ");
    scanf("%d",&b);
    printf("Enter third number: ");
    scanf("%d",&c);
    if (a > b){
        if (a>c)
        {
            printf("%d",a);
        }
        else{
            printf("%d",c);
        }
        
        
    }
    else if (b > a)
    {
        if (b > c)
        {
            printf("%d",b);
        }
        else{
            printf("%d",c);
        }
        
    }
    

}