//計算三角形面積
//每一組需輸入兩正整數，分別代表三角形的底及高。
//輸出三角形面積。

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>

int main()
{
    float w=0;
    float h=0;

    scanf("%f" , &w);
    scanf("%f" , &h);

    printf("%.1f" , w*h/2);

    return 0;
}
