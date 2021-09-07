#include<stdio.h>
#include<ctype.h>
#include<string.h>
int main()
{  char a[10000];
int n=0;
    scanf("%[^\n]s", a);
    for(int i=0;i<strlen(a);i++)
    {
        if(a[i]=='F'||a[i]=='f')
        {
            if(a[i+1]=='r'||a[i+1]=='R')
                {
                    if(a[i+2]=='o'||a[i+2]=='O')
                    {
                        if(a[i+3]=='g'||a[i+3]=='G')
                        n=n+1;
                    }
                }       
        }
    }
    printf("%d", n);
}