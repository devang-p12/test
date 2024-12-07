#include<stdio.h>

int main(){
    int simple_intrest;
    int principle;
    int rate;
    int time;
    scanf("%d %d %d" , &principle , &rate , &time);
    simple_intrest = principle * rate * time /100;
    printf("%d" , simple_intrest);
    

}