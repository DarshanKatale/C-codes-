#include<stdio.h>
int main()
{
    float arr[10]={2.2, 3.1, 2.1, 5.1, 4.2},num;
    int c,pos,i;

    printf("enter the number to be search :");
    scanf("%f",&num);

    for(i=0;i<5;i++)
    {
        if(arr[i]==num)
        {
            c=1;
            pos=i+1;
            break;
        }
    }
        if(c==1)
        {
            printf("%.1f found at position %d",num,pos);

        }
        else{ printf("number not found..");

           
        }
    return 0;
}
