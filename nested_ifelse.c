#include<stdio.h>
int main()
{
    int a,b,c;

    printf("enter value for a :");
    scanf("%d",&a);

    printf("enter value for b :");
    scanf("%d",&b);

    printf("enter value for c :");
    scanf("%d",&c);

    if(a>b)
    {
        if(a>c)
        printf("greater value is %d",a);
        else 
        printf("greater value is %d",c);
    
    }
    else {
        if(b>c)
        printf("greater value is %d",b);
        else
        printf("greater value is %d",c);
    }
    return 0;

}