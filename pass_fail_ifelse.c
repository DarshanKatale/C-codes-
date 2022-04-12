#include <stdio.h>
int main()
{
    int m3, cn, mp, total, pass, fail;
    float per;

    printf("enter the marks for m3 =");
    scanf("%d", &m3);

    printf("enter the marks for cn =");
    scanf("%d", &cn);

    printf("enter the marks for mp =");
    scanf("%d", &mp);

    total = m3 + cn + mp;

    printf("total = %d\n", total);

    per = (total * 100) / 300;

    printf("percentage = %.2f\n", per);

    if (per > 40)
    {
        printf("the student is pass");
    }

    else
    {
        printf("thr student is fail");
    }

    return 0;
}
