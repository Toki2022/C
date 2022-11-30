//fib数列
#include<stdio.h>
int fib( int n ){
    int f=1;
    if(n==1||n==2)
    {
        f=1;
    }
    else
    {
        f=fib(n-1)+fib(n-2);
    }
    return f;
}
int main()
{
    int n;

    scanf("%d", &n);
    printf("%d\n", fib(n));

    return 0;
}