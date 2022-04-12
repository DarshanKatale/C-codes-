#include<stdio.h>
#include<string.h>
int main()
{
    char str1[20],str2[20];

    printf("enter lower case string : ");
    scanf("%s",&str1);

    printf("upper string is : %s",strupr(str1));

    printf("\nenter upper case string : ");
    scanf("%s",&str2);

    printf("string is : %s ",strlwr(str2));

}