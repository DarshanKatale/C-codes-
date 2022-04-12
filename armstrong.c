#include<stdio.h>
int main()
{
    int n,rev,rem=0,cub,sum=0,t;

    printf("enter a number:");
    scanf("%d",&n);

    t=n;

    while (n>0)
    {
    rem=n%10;
    cub=rem*rem*rem;
    sum=sum+cub;
    n=n/10;
    }

   printf("%d",sum);

   if (sum==t)
   {
       printf("\nentered no. is armstrong  ");
   }
   else
   {
       printf("\nentered no.it is not armstrong");
   }
   return 0;
}