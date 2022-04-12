#include<stdio.h>
int main()
{
    char name[20],id[10];
    int mon_sal;
    float per_sal;

    printf("enter name of employee = ");
    scanf("%s",&name);
    printf("enter id =");
    scanf("%s",&id);
    printf("enter monthly salary =");
    scanf("%d",&mon_sal);

    per_sal=mon_sal/30;

    printf("name = %s\n",name);
    printf("id = %s\n",id);
    printf("per day salary = %f",per_sal);

}
