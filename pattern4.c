#include<stdio.h>
int main()
{
    int n,r,c;

    printf("enter how many numbers of column :");
    scanf("%d",&n);

    for(r=1;r<=n;r++)
    {
        for(c=1;c<=r;c++)
        {
            printf("%d",r);
        }
           printf("\n");
    }
    return 0;
}