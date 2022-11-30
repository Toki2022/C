//圆台体积
#include<stdio.h>
#include<math.h>
#define pai 3.14
double volume_tc(double r_lower, double r_upper, double h){
    double v;
    v=(1.0/3)*pai*h*(pow(r_lower,2)+pow(r_upper,2)+(r_lower*r_upper));
    return v;  
}
int main()
{
    double h, r_lower, r_upper, v;

    scanf("%lf%lf%lf", &r_lower, &r_upper, &h);
    v = volume_tc(r_lower, r_upper, h);
    printf("%.2f\n", v);

    return 0;
}