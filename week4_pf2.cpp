#include<stdio.h>
#include<ctype.h>
#include<string.h>
int main()
{
    char a[1000];
    int i=0,n=0;
    scanf("%s", a);
    while(i<strlen(a))
    {
        if((a[i]==70||a[i]==102)&&(a[i+1]==82||a[i+1]==114)&&(a[i+2]==111||a[i+2]==79)&&(a[i+3]==71||a[i+3]==103))
        {
            n=n+1;
        }
        i++;
    }
printf("%d", n);
}