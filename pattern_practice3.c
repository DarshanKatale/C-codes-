#include<stdio.h>
int main()
{
    int r,c,s;

    for(r=1;r<=3;r++)
    {
    
    for(s=1;s<r;s++)
   { printf(" ");}
    
    for(c=r;c<=3;c++)
    {printf("* ");}
    
    printf("\n");
    }
    return 0;
}