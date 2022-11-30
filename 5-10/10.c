#include<stdio.h>
int CountDigit( int number, int digit )
{
    int a;
    //统计数位的循环  for()
    for(int i=1;;i++)
    {
        
        if(number%10==digit)
        {
            a++;
        }
        if(number%10==0)
        break;

        number=number/10;
    }
    return a;
}
int main()
{
    int a;
    int number=287620;
    int digit=2;
    a=CountDigit(number,digit);
    printf("%d\n",a);
    return 0;
}