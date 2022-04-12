#include<stdio.h>
#include<stdlib.h>
void area1();
void area2();
int main()
{
    int ch;
    menu:
    printf("1.area of square. \n2.area of rectangle. \n3.EXIT..");
    printf("\n#.Enter your choise :");
    scanf("%d",&ch);

    switch(ch)
    {
    case 1:
    area1();
    goto menu;

    case 2:
    area2();
    goto menu;

    case 3:
    exit(0);

    default:
    printf("you have entered wrong choise...");
    goto menu;
    }
    return 0;
}
void area1()
{
    int a,area;
    printf("\nenter side of square : ");
    scanf("%d",&a);
    area=a*a;
    printf("area of square is %d\n ",area);

}
void area2()
{
    int a,b,area;
    printf("\nenter 2 sides of rectangle : ");
    scanf("%d%d",&a,&b);
    area=a*b;
    printf("area of reactangle is %d\n ",area);

}