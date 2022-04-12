#include<stdio.h>
int main()
{
    char ch,a,e,i,o,u;

    printf("enter the character : ");
    scanf("%c",&ch);

    if (ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u')

    printf("entered character is Vowels");

    else

    printf("entered character is consonant");

    return 0;
}