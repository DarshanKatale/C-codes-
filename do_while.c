#include<stdio.h>
int main()
{
    int i=1,sum=0;

    do
    {
        printf("%d\t",i);
        sum=sum+i;
        i++;
    }
    while(i<=5);

    printf("sum is :%d",sum);
 
    return 0;
}