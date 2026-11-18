#include <stdio.h>

int main()
{
    int n, i, sum, res;

    printf("Enter a number: ");
    scanf("%d", &n);

    // For loop
    printf("\nNumbers from 1 to %d:\n", n);

    for (i = 1; i <= n; i++)
    {
        printf("%d ", i);
    }

    // While loop
    sum = 0;
    i = 1;

    while (i <= n)
    {
        sum = sum + i;
        i++;
    }

    // Do-while loop
    res = 1;
    i = 1;

    do
    {
        res = res * i;
        i++;
    }
    while (i <= n);

    printf("\n\nSum of numbers = %d", sum);
    printf("\nFactorial of %d = %d", n, res);

    return 0;
}
