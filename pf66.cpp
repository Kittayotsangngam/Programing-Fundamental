#include<stdio.h>
int main()
{double x,y;
    scanf("%lf",&x);
    scanf("%lf",&y);
    printf("before swap\n");
    printf("%lf\n", x);
    printf("%lf\n", y);
    x=x-y;
    y=x+y;
    x=y-x;
    printf("after swap\n");
    printf("%lf\n", x);
    printf("%lf\n", y);
}