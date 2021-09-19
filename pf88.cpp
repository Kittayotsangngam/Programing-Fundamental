#include<stdio.h>
    long number;
    double root = 1;
    long i = 0;
    long z=0;
void sqrt()
{
    do
    {
        i = i + 1;
        root = (number / root + root) / 2;
        if (i == number + 1) { z=1;break; }
    }while(z==0);
    printf("%.3f",root);
}
int main() {
    scanf("%d",&number);
    sqrt();
}