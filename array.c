#include<stdio.h>
int main()
{
    int arr[50],n,i;

    printf("enter how many elememts :");
    scanf("%d",&n);

    printf("enter %d element to store in the array :",n);

    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    {
        printf("the element in the array is :\n");
        for(i=0;i<n;i++)
        {
            printf("%d\n",arr[i]);

        }
        return 0;
    }
    
}