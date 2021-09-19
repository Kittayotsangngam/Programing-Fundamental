#include<stdio.h>
void swap(double &x,double &y)
{
    x = x+y -(y=x);
}
int main()
{double x,y;
    scanf("%lf",&x);
    scanf("%lf",&y);
    printf("before swap\n");
    printf("%lf\n", x);
    printf("%lf\n", y);
    swap(x, y);
    printf("after swap\n");
    printf("%lf\n", x);
    printf("%lf\n", y);
}
