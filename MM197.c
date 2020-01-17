//平均速度
//輸入球總共飛了多久假設距離為 14 公尺。
//求出解取到小數點第三位

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>

int main()
{
    float time=0;
    float v=0;
    scanf("%f" , &time);
    v = time / 14;
    printf("%.3f\n" , v);
}
