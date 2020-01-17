//學生成績排序
//使用者輸入學生人數 n ，以及每位學生的成績
//根據使用者輸入的成績，顯示排序的結果 ( 由低到高 )

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>

int main()
{
    int cnt=0;
    int a[100];
    scanf("%d" , &cnt);

    for(int i=0 ; i<cnt ; i++)
    {
        scanf("%d" , &a[i]);
    }

    for(int i=0 ; i<cnt ; i++)
    {
        for(int j=0 ; j<cnt-1 ; j++)
        {
            if(a[j]>a[j+1])
            {
                int temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
        }
    }

    for(int i=0 ; i<cnt ; i++)
    {
        printf("%d\n" , a[i]);
    }

}
