#include <stdio.h>
#define MAXN  10
int FindArrayMax(int a[], int n)
{
    int t;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (a[i] > a[i + 1])
            {
                t = a[i];
                a[i] = a[i + 1];
                a[i + 1] = t;
            }
        }
    }
    return t;
}
int main()
{
    int i, n;
    int a[MAXN];

    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("%d\n", FindArrayMax(a, n));

    return 0;
}