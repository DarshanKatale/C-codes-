#include<stdio.h>
void add();
int main()
{
    add();
    return 0;
}
void add()
{
    int a,b,c;
    printf("enter two numbers : ");
    scanf("%d%d",&a,&b);
    c=a+b;
    printf("addition is :%d ",c);
}