//字符矩阵
#include<stdio.h>
void matrix(int length, int width, char ch)
{
    for(int i = 0; i < width; i++)
    {
        for(int j = 0; j <length; j++)
        {
            printf("%c",ch);
        }
        printf("\n");
    }
}
int main()
{
    int length, width;
    char ch;

    scanf("%d %d %c", &length, &width, &ch);
    matrix(length, width, ch);

    return 0;
}