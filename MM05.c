//計算正方形面積
//輸入一個大於零的數字為正方形之邊長
//輸出正方形面積取到小數點以下第一位

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>

int main()
{
    float a=0;
    scanf("%f " , &a);
    float b=0;
    b=a*a;

    printf("%.1f" , b);

    return 0;
}
