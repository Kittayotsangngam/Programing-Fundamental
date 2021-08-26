#include<stdio.h>
int main()
{
    int b;
    scanf("%d", &b);
    for(int i=1;i<=b;i++)
    {
        for(int j=1;j<2*b;j++)
        {
            if(j<= b-i)
            {printf(" ");
            }
            else if(j<b+i)
            {printf("*");
            }
        }
        printf("\n");
    }
}