#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
    srand(time(0));
     int a =rand();
     printf("%d",a%100+1);
     return 0;
}