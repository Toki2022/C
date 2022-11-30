#include <stdio.h>
int reverse(int number)
{
    int symbol = 1, x, sum = 0;
    if (number < 0)
    {
        number = -number;
        symbol = -1;
    }
    while (number > 0)
    {
        x = number % 10;
        sum = sum * 10 + x;
        number = number / 10;
    }
    sum = sum * symbol;
    return sum;
}
int main()
{
    int n;

    scanf("%d", &n);
    printf("%d\n", reverse(n));

    return 0;
}
