#include <stdio.h>

int main()
{
    int rem, rev = 0, n;

    printf("enter the number :");
    scanf("%d", &n);

    while (n > 0)
    {
        rem = n % 10;
        rev = rev * 10 + rem;
        n = n / 10;
    }
    printf("%d", rev, rem, n);

    return 0;
}
