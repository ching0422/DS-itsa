//攝氏溫度轉華式溫度
//輸入攝氏溫度，輸出華氏溫度

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>

int main()
{
    float c=0;
    float f=0;
    scanf("%f" , &c);

    f = c * 9;
    f = f / 5;
    f = f + 32;

    printf("%.1f" , f);

    return 0;

}
