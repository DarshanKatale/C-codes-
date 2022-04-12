#include<stdio.h>
#include<string.h>
int main()
{
    char str[20];

    printf("enter a string :");
    scanf("%s",&str);

    printf("given string is :%s ",str);

    printf("\nstring reverse is :%s ",strrev(str));

}