#include<stdio.h>
int main()
{
    int s,r,c;

    for(r=1;r<=3;r++)
    {
        for(s=2;s>=r;s--)
        {
            printf(" ");
        }
       { 
        for(c=1;c<=r;c++)
        {
        printf("*");
        }
    printf("\n");
    }
    }

return 0;
}