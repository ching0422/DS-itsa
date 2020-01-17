//求費氏數列
//輸入一個數字為 n
//輸出費氏數列為 :0,1,1……

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>

int main()
{
    int N,i;
    int f[100]= {0};

    scanf("%d", &N);
    f[0] = 0;
    f[1] = 1;
    if(N==0)
    {
        printf("%d",f[N]);
    }
    else if(N==1)
    {
        printf("%d %d",f[N]);
    }
    else
    {
        for(i=2 ; i<=N ; i++)
        {
            f[i] = f[i-1] + f[i-2];
        }
        for(int i=0 ; i<=N ; i++)
        {
            printf("%d ", f[i]);
        }

    }

    return 0;
}
