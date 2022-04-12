#include<stdio.h>
int main()
{
    int a,b,ch;

    printf("1.add \n2.sub \n3.mult \n4.div");

    printf("\nenter your choise :");
    scanf("%d",&ch);

    printf("\nenter two numbers :");
    scanf("%d%d",&a,&b);

    switch (ch)
    {
        case 1: 
        printf("addition of two no. is %d",a+b);
        break;

        case 2:
        printf("substration of two no. is %d",a-b);
        break;

        case 3:
        printf("multiplication of two no. is %d",a*b);
        break;

        case 4:
        printf("division of two no. is %d",a/b);
        break;

        default:
        printf("wrong choice");


    }

    
return 0;
        
    
}