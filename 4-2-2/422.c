#include <stdio.h>
double fact( int n )
{
    int j=1;
    for( int i=1;i<=n;i++ ){
        j=j*i;
    }
    return j;
}

int main(){
    int n;
    double e=1;

    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        e=e+1.0/fact(i);
    }
    printf("%f\n",e);
    return 0;
}