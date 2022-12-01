#include <stdio.h>
int narcissistic(int number)
/*{  int remainder, sum = 1, allsum = 0;
    int x, count = 0, end = 1;
    x = number;
    while (x != 0)
    {
        x = x / 10;
        count++;
    }
    x = number;
    while (x != 0)
    {
        remainder = x % 10;
        for (end; end <= count; end++)
        {
            sum *= remainder;
        }
        allsum += sum;
        x = x / 10;
        end = 1;
        sum = 1;
    }
    if (allsum == number)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
*/
{
    int sum = 1;
    int q;
    int t = 0;
    int j = 0;
    int allsum = 0;
    /*q = number;
    while (q != 0)
    {
        q = q / 10;
        t++;
    }*/
    q = number;

    
        while (q != 0)
        {
            j=q%10;
            sum = j * j*j;

            allsum = allsum + sum;
            q = q / 10;
        }
        if (allsum == number)
        {
            return 1;
        }
        else
        {
            return 0;
        }
    }


    void PrintN(int m, int n)
    {
        m = m + 1;
        for (m; m < n; m++)
        {
            if (narcissistic(m) == 1)
            {
                printf("%d\n", m);
            }
        }
    }

    int main()
    {
        int m, n;

        scanf("%d %d", &m, &n);
        if (narcissistic(m))
            printf("%d is a narcissistic number\n", m);
        PrintN(m, n);
        if (narcissistic(n))
            printf("%d is a narcissistic number\n", n);

        return 0;
    }