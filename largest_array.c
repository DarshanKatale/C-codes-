#include<stdio.h>
int main()
{
    int large,size,i,arr[10];

    printf("enter array size (max 10) :");
    scanf("%d",&size);

    printf("enter array element :");

    for(i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);

    }
    printf("searching for largest number...\n\n");
    large=arr[0];
    for(i=1;i<size;i++)
    {
        if(large<arr[i])
        {
            large=arr[i];
        }
    }
    printf("laregest number =%d ",large);   

}