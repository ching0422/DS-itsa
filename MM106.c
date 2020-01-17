//求質數問題
//從鍵盤輸入一個整數 n ， 1 < n ≤ 1000 ， 且 n 為整數
//輸出小於 等於 n 的最大質數。

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>

int main()
{
    int flag=0,n,i;
    while(scanf("%d",&n)!=EOF)
    {
        if(n>1 && n<=1000)
        {
            n--;
            while(n>=2)
            {
                for(i=2 , flag=0 ; i<n ; i++)
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
        else break;

    }
    return 0;
}

