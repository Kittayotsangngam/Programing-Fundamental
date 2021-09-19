#include<stdio.h>
int  main()
{
    long number;
    double temp, sqrt;
    scanf("%d", &number);
    sqrt = number / 2;
    temp = 0;
    while(sqrt != temp){
        temp = sqrt;
        sqrt = ( number/temp + temp) / 2;
    }
    printf("%.3f",  sqrt);
}