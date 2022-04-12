#include <stdio.h>
int main()
{
    char voterid;
    int age;

    printf("Is person having voterid :");
    scanf("%c", &voterid);

    printf("enter age of person :");
    scanf("%d", &age);

    if (age >= 18 && voterid == 'y')

        printf("\nperson is eligible for voting.");

    else
        printf("\nperson is not eligible for voting.");

    return 0;
}