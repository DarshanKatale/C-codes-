#include<stdio.h>
int main()
{
    int x[3][3],y[3][3],z[3][3],i,j;

    printf("enter elements for 1st matrix :");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        scanf("%d",&x[i][j]);
    }

        printf("enter elements for 2nd matrix :");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        scanf("%d",&y[i][j]);
    }
    printf("addition = \n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            z[i][j]=x[i][j]+y[i][j];
            printf("%d ",z[i][j]);
        }
        printf("\n");
    }

    return 0;
}