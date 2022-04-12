#include <stdio.h>

int main()
{
    int rem, rev = 0, n,t;
  

    printf("enter the number :");
    scanf("%d", &n);

    t=n;

    while (n > 0)
    {
        rem = n % 10;
        rev = rev * 10 + rem;
        n = n / 10;
    }
    
    printf("%d",rev);

    if(rev==t)
    {
        printf("\nthe no. is palendrom");
    }
  
    return 0;
}
