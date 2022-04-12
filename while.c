#include<stdio.h>
int main()
{
    int i=1,sum=0;

    while(i<=20)
    {
    printf("%d\n",i);
    sum=sum+i;
    i++;
    }
    printf("\nsum is =%d",sum);

    return 0;

}