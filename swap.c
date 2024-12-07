#include<stdio.h>

int main(){
    int a;
    int b;
    int c;
    scanf("%d %d", &a ,&b);
    c = b;
    b = a;
    a = c;
    printf("%d %d", a,b);



}