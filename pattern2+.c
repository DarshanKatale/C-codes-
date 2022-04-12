#include<stdio.h>
int main()
{
    int s,r,c,t=1,n;

    printf("enter how many rows :");
    scanf("%d",&n);

    for(r=1;r<=n;r++)
    {
    for(s=n-1;s>=r;s--)
    printf(" ");

    for(c=1;c<=t;c++)
    printf("*");

    printf("\n");
    t=t+2;
    }

    return 0;
}