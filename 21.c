//最大值與最小值
//找出輸入的十個數字的最大值和最小值
//輸入十個數字，以空白間隔
//輸出數列中的最大值與最小值

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>

#include<stdio.h>
int main()
{
    int a[100] , n=0 , i=0;
    int max , min;

    while(scanf("%d",&n)!=EOF)
        {
        for(i=1 ; i<=n ; i++)
        {
            scanf("%d",&a[i]);
        }
        max = a[1];
        min = a[1];
        for(i=1 ; i<=n ; i++)
        {
            if(a[i]>max){max = a[i];}
            if(a[i]<min){min = a[i];}
        }
        printf("max value = %d\n" , max);
        printf("min value = %d\n" , min);
    }
}
