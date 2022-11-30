#include<stdio.h>
void hollowPyramid ( int n )
{
    for( int i = 1;i<n;i++ )
    {
        printf("");
        {
            printf("%d\n",i);
        }

    }


    
}
int main(){
    int n=5;
    hollowPyramid(n);
    return 0;
}

