// รับค่าตัวเลข 2 จำนวน เก็บใน x และ y ตามลำดับ จากนั้นให้ทำการสลับค่ากัน โดยห้ามสร้างตัวแปรเพิ่ม (Level 5)
#include<stdio.h>
int main()
{double x,y;
    scanf("%lf",&x);
    scanf("%lf",&y);
    printf("before swap\n");
    printf("%lf\n", x);
    printf("%lf\n", y);
    x=x+y;
    y=x-y;
    x=x-y;
    printf("after swap\n");
    printf("%lf\n", x);
    printf("%lf\n", y);
}
