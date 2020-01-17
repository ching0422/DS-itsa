//計算陣列中所有元素的立方和
//任意輸入六個整數。輸出所有元素的立方和。

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>

int main()
{
    int a[6];
    int output=0;

    for(int i=0 ; i<6 ; i++)
    {
        scanf("%d" , &a[i]);
    }

    for(int i=0 ; i<6 ; i++)
    {
        output = output + a[i]*a[i]*a[i];
    }

    printf("%d" , output);

}
