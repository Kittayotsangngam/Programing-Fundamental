#include<stdio.h>
int main()
{
    int a,k=0;
    scanf("%d", &a);
    for(int i=1 ;i<=a;++i)
    {   k=0;
    for(int j=1;j<=a-i;++j)
        {printf(" ");
        }
        while(k!=(2*i-1))
        {printf("*");
        ++k;
        }
        printf("\n");
    }
}
