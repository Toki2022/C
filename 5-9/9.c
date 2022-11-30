#include<stdio.h>
#include<math.h>

    /*double cos=1;
    int a=1;
    double b=x;
    double sum=1;
    int o=1;
    for(int i=1;;i++)
    {
        if(i%2==0)
        {
            a=a*i;
            b=b*x;
        cos=b/a;
        o++;
        if(o%2==0)
        {
            sum=sum-cos;
        }
        else
        {
            sum=sum+cos;
        }
            if(fabs(cos)>=e)
            {
                return sum;
                break;
            }
        }
    }*/
double funcos( double e, double x )
{
    double sum = 0.0;
    int n = 0;
    int flag = 1;
    double jiecheng(int i);
    for (n = 0; ; n ++)
    {   
        double temp = pow(x,n*2) / jiecheng(n*2);
        sum += flag * temp;
        if (temp < e) 
            break;
        flag = - flag;        
        
    }
    return sum;
}
double jiecheng (int n) 
{
    if (n == 0 || n == 1 )  return 1;
    else return jiecheng(n-1)*n;
}
int main()
{    
    double e, x;

    scanf("%lf %lf", &e, &x);
    printf("cos(%.2f) = %.6f\n", x, funcos(e, x));
    
    return 0;
}