#include<stdio.h>
int main()
{
    int c,s,r,s1=3,t=1;

    for(r=1;r<=3;r++)
    {
        for(s=2;s>=r;s--)
        printf(" ");

        for(c=1;c<=t;c++)
        printf("*");

        printf("\n");
        t+=2;
    }
      t=3;
    for(r=1;r<=2;r++)
    {
        for(s=1;s<=s1;s++)
        printf(" ");

        for(c=1;c<=t;c++)
        printf("*");

        printf("\n");
        t-=2;
        s1=4;-
    }

    return 0;

}