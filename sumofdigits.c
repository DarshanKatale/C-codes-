#include<stdio.h>
int main()
{
    int m,n,sum=0;

    printf("enter a number :");
    scanf("%d",&n);

    while(n>0)
    {
        m=n%10;
        sum=sum+m;

        n=n/10;
 }
     printf("sum is = %d",sum);

 return 0;
}