#include<stdio.h>
int main()
{
    int u,v;
    scanf("%d %d",&u,&v);
    while( v!= 0){
        int temp = u%v;
        u = v;
        v = temp;

    }
    printf("%d",u);
    return 0;
}