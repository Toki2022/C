#include<stdio.h>
double mypow( double x, int n )
{
    double s=x;

    for(int i=1;i<n;i++)
    {
        s=s*x;
    }
    return s;
}
int main(){
    double x;
    int n;

    scanf("%lf %d", &x, &n);
    printf("%f\n", mypow(x, n));

    return 0;
}