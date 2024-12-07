#include <stdio.h>

int main()
{
    char letter;
    scanf("%c",&letter);
    if (letter>=65 && letter<=90)
    {
        printf("\n letter is capital");
    }
    else if(letter>=97 && letter<=122)
    {
        printf("\n letter is small");
    }
}