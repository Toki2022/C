#include <stdio.h>
int fib(int n)
{
    int n1 = 1, n2 = 1, n3;
    if (n <= 2)
    {
        n3 = 1;
    }
    for (int i = 2; i <= n; i++)
    {
        n3 = n1 + n2;
        n1 = n2;
        n2 = n3;
    }
    return n1;
}
void PrintFN(int m, int n)
{
    int i = 1;
    int flag = 0;  //标记求得的斐波那契数
    int blank = 1; //控制字符前面是否带空格，标记为真，方便输出不带空格的第一个数
    while (fib(i) < m)
    {
        i++;
    }
    while (fib(i) <= n)
    {
        if (blank)
        {
            printf("%d", fib(i)); //第一项，不带空格
            flag++;
            blank = 0; //标记为假，执行另一判断语句
        }
        else
        {
            printf(" %d", fib(i));
        }
        i++;
    }
    if (flag == 0)
    {
        printf("No Fibonacci number");
    }
}
int main()
{
    int m, n, t;

    scanf("%d %d %d", &m, &n, &t);
    printf("fib(%d) = %d\n", t, fib(t));
    PrintFN(m, n);

    return 0;
}