#include<stdio.h>
int main()
{
    float per;

    printf("enter the percentage : ");
    scanf("%f",&per);

    if(per>=80 && per<100)
    {
        printf("A grade");
    }
    else if(per>60 && per<80)
    printf("B grade");

    else if(per>40 && per<60)
    printf("C grade");

    else 
    printf("sorry you are fail, better luck next time");

    return 0;

}