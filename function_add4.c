#include<stdio.h>
int add();
int main()
{
     int a,b;
    printf("addition is :%d ",add(a,b));

}
int add(int a,int b)
{   
    printf("enter two numbers : ");
    scanf("%d%d",&a,&b);

    return (a+b);

}
