//最大公约数
#include <stdio.h>
int gcd( int x, int y ){
    while(x!=y)
    {
        if(x>y)
        x= x - y;
        if(x<y)
        y = y - x;
    }
    return x;
}
int main()
{
    int x, y;
    
    scanf("%d %d", &x, &y);
    printf("%d\n", gcd(x, y));
    
    return 0;
}