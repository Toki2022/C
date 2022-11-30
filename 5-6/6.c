//素数和
#include <stdio.h>
int prime(int p)
{
    int j = 0;
    if (p == 2)
    {
        j = 1;
    }

    for (int i = 2; i < p; i++)
    {
        if (p % i != 0)
        {
            j = 1;
        }
        else
        {
            j = 0;

            break;
        }
    }
    return j;
}
int PrimeSum(int m, int n)
{
    int sum = 0;
    for (; m <= n; m++)
    {
        if (prime(m) == 1)
        {
            sum = sum + m;
        }
    }
    return sum;
}

int main()
{

    int m, n, p;

    scanf("%d %d", &m, &n);
    printf("Sum of ( ");
    for (p = m; p <= n; p++)
    {
        if (prime(p) != 0)
            printf("%d ", p);
    }
    printf(") = %d\n", PrimeSum(m, n));

    return 0;
}
