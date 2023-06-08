#include <stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    int t=n;
    int c=0;
    while(t!=0)
    {
        int d=t%10;
        if(d==4 || d==7)
        {
            c++;
        }
        t/=10;
    }
    int flag=0;
    while(c!=0)
    {
        int d=c%10;
        if(d!=4 && d!=7)
        {
            flag=0;
            break;
        }
    }
    if(flag) printf("LUCKY");
    else printf("NOT LUCKY");
}