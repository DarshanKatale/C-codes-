#include <stdio.h>
int main()
{

    int paisa,rupee;
    float rupee1;
    
    printf("enter the how many rupees : ");
    scanf("%d", &rupee);

    paisa = rupee * 100;

    printf("paisa = %d\n", paisa);
   

    printf("enter how many paisa : ");
    scanf("%d",&paisa);

    rupee1=paisa/100.0;

    printf("rupee = %.2f",rupee1);

    return 0;
