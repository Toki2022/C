#include<stdio.h>
int fn( int a, int n )
{
    int sum=0;
    for( int i = 0; i < n;i++ )
    {
        sum=sum*10+a;
    }
    return sum;
}
int SumA( int a, int n )
{
    int sum=0;
    for(int i = 0; i <=n;i++)
    {
        sum=sum+fn(a,i);
    }
    return sum;
}
int main()
{
    int a, n;

    scanf("%d %d", &a, &n);
    printf("fn(%d, %d) = %d\n", a, n, fn(a,n));        
    printf("s = %d\n", SumA(a,n));    
    
    return 0;
}