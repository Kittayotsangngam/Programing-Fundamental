#include<stdio.h>
int main()
{
    int i=0,j=0,n,z,norigin;
    scanf("%d", &norigin);
    n=norigin;
    while(n>i)
    {z=norigin;
        while(z>j)
        {
        printf("*");
        z--;
        }
        printf("\n");
        n--;
    }
    return 0;
}