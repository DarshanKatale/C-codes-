#include<stdio.h>
int main()
{
    int len,bre,hei,rad,base,side,ch;
    float area,pi=3.14;

    menu :
    printf("\n1.area of triangle \n2.area of circle \n3.area of square \n4.area of rectangle \n5.exit");

    printf("\nenter your choise :");
    scanf("%d",&ch);

    switch(ch)  
    {
    case 1:
    printf("enter the base and height of triangle : ");
    scanf("%d%d",&base,&hei);
    area=(base*hei)/2;
    printf("area of triangle is %.2f",area);
    goto menu;

    case 2:
    printf("enter the radius of circle :");
    scanf("%d",&rad);
    area=pi*rad*rad;
    printf("the area of circle is %.2f",area);
     goto menu;

    case 3:
    printf("enter the side of square :");
    scanf("%d",&side);
    area=side*side;
    printf("the area squre is %.2f",area);
     goto menu;

    case 4:
    printf("enter the legnth and breadth of reactangle :");
    scanf("%d%d",&len,&bre);
    area=len*bre;
    printf("the area of rectangle is %.2f",area);
    goto menu;

    case 5:
        exit(0); //out of program
        //break; //out of switch

    default:
        printf("you entered wrong choice");
         goto menu;
}
printf("hello");
return 0;
}