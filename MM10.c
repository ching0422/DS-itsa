//���ū���ئ��ū�

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
