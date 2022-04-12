#include<stdio.h>
int main()
{
    int a=0,b=1,c,i=1,n;

    printf("eneter how many numbers :");
    scanf("%d",n);

    printf("%d%d",a,b);

    while (i<=n-2)
{
    c=a+b;
    printf("%d",c);
    a=b;
    b=c;
    i++;
}
return 0;

}