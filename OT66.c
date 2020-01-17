//成績搜尋
//第一行先輸入一個整數n表示有幾筆測資，每筆測資輸入一組學生成績
//輸出最高的學生成績為幾分，最後必須有換行字元

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>

int main()
{
    int a[100],n=0,i=0;
    int max;

    scanf("%d",&n);
    for(i=1 ; i<=n ; i++)
    {
        scanf("%d",&a[i]);
    }
    max = a[1];
    for(i=1 ; i<=n ; i++)
    {
        if(a[i]>max)
        {
            max = a[i];
        }
    }
    printf("%d\n",max);
}
