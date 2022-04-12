#include<stdio.h>
int add();
int main()
{
    int c;
    c=add();
    printf("addition =%d ",c);

}
int add()
{
    int a,b,c;
    printf("enter two numbers : ");
    scanf("%d%d",&a,&b);

    c=a+b;
    return (c);
}