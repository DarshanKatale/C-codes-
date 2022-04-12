# include <stdio.h>
int main()
{

  float doller,rupee;
    
    
    printf("enter the how many doller : ");
    scanf("%f", &doller);

    rupee = doller*74.23;

    printf("rupee = %.2f\n", rupee);
   

    printf("enter how many rupee : ");
    scanf("%f",&rupee);

    doller= rupee / 74.23;

    printf("doller = %.2f",doller);

    return 0;
}