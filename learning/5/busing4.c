#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int factor =1;
    int i =n;
    for (; n>1;n--)
    {
        factor *=n;
    }
    printf("%d!=%d",i,factor);
    return 0;
}