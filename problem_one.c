#include <stdio.h>

int main()
{
    int a, b;    
    printf("Enter First number: ");
    scanf("%d", &a);
    printf("Enter Second number: ");
    scanf("%d",&b);
    if(a > b){
        printf("%d is maximum", a);        
    }
    else if(a > b){
        printf("%d is maximum", b);
    }
    else if(a == b){
        printf("Both are equal");
    }
    return 0;
}