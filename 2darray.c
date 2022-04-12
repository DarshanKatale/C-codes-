#include<stdio.h>
int main()
{
    int i,j,arr[4][3]={{1,2,3},{2,3,4},{3,4,5},{4,5,6}};

        for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
}