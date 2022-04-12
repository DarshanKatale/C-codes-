#include<stdio.h>
int main()
{
    int i,j,k,x=1;
    int arr[3][3][3];

    printf(":::3D array elements:::\n\n");

    for(i=0;i<3;i++)
    {
        printf("\n matrix %d\n",i+1);

         for(j=0;j<3;j++)
        {
            for(k=0;k<3;k++)
            {
              arr[i][j][k]=x;

              printf("%d\t",arr[i][j][k]) ;
              x++;
            }
            printf("\n");
        }
        printf("\n");
    }
    return 0;

}