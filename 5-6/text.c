#include<stdio.h>
int main(){
     int j = 0;
     int  p=7;
    if (p <= 1)
    {
        j = 0;
    }
    for (int i = 2; i < p; i++)
    {
        if (p % i != 0)
        {
            j = 1;
        
        }
        else
        {
            j = 0;
         break;
        }
    }
    printf("%d\n", j);
    return 0;
}