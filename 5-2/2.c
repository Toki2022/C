#include<stdio.h>
int sign( int x ){
    int i=0;
    if(x>0)
    {
        i=1;
    }
    else if(x=0)
    {
        i=0;
    }
    else
    {
        i=-1;
    }
    return i;
}
int main()
{
    int x;

    scanf("%d", &x);
    printf("sign(%d) = %d\n", x, sign(x));
    
    return 0;
}