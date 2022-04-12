#include<stdio.h>
#include<string.h>
int main()
{
    char s1[20],s2[20];

    printf("enter 1st string :");
    scanf("%s",&s1);

    printf("enter 2nd string :");
    scanf("%s",&s2);

    strcpy(s1,s2);

    printf("string = %s ",s2);

}