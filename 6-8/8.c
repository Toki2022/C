#include<stdio.h>
int factorsum( int number )
{
    int sum=0;
    for( int i=1; i<number; i++ )
    {
        if(number%i==0)
        {
            sum=sum+i;
        }
    }
    if(sum==number)
    {
        return sum;
    }
}
void PrintPN( int m, int n )
{
    for(;m<n;m++)
    {
        factorsum(m)
    }
}
int main()
{
    int number=6;
    printf("%d\n", factorsum(number));
    return 0;
}