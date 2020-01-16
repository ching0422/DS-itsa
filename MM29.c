//最大質數

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>

int main()
{
    int flag=0,n,i;
    while(scanf("%d",&n)!=EOF)
    {
        n--;
        while(n>=2)
        {
            for(i=2,flag=0; i<n; i++)
            {
                if(n%i==0)
                {
                    break;
                }
                if(i==(n-1))
                {
                    flag=1;
                }
            }
            if(flag==1)
            {
                break;
            }
            n--;
        }
        printf("%d\n",i);
    }
    return 0;
}
