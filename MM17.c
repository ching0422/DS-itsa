//公因數
//輸入兩個數字，找出它們的最大公因數

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>

int main()
{
    unsigned int a,b,c;
    scanf("%u%u",&a,&b);
    if(a<b)
    {
        c=a;
    }
    if(b<a)
    {
        c=b;
    }
    while(c>=1)
    {
        if(a%c==0&&b%c==0)
        {
            break;
        }
        if(a%c!=0||b%c!=0)
        {
            c--;
        }
    }
    printf("%d\n",c);
    return 0;
}
