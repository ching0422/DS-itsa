//½è¼Æ§P§O

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>

int main()
{
    int a=0, i=0, flag=0;

    while(scanf("%d", &a)!=EOF)
    {
        for(i=2,flag=0 ; i<=a ; i++)
        {
            if(a%i==0)
            {
                break;
            }
            if(i==(a-1))
            {
                flag=1;
            }
        }
        if(a==2)
        {
            printf("YES\n");
        }
        else if(flag==0)
        {
            printf("NO\n");
        }
        if(flag==1)
        {
            printf("YES\n");
        }
    }

    return 0;
}
