#include <stdio.h>
double fact(int n)
{
    double m = 1;
    for (int i = 1; i <= n; i++)
    {
        m = i * m;
    }
    return m;
}
int main()
{
    int n;
    int m;
    double o;
    double t;
    float j;

    scanf("%d%d", &m, &n);
o=fact(n);
t=fact(n-m);
    j = o/t;

    printf("result=%.0f\n", j);

    return 0;
}
