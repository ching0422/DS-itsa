//計算總和、乘積、差、商和餘數
//輸入兩個整數，輸出總和、乘積、差、商、和餘數

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>

int main()
{
    int a;
    int b;

    scanf("%d" , &a);
    scanf("%d" , &b);

    printf("%d+%d=%d\n" , a , b , a+b);
    printf("%d*%d=%d\n" , a , b , a*b);
    printf("%d-%d=%d\n" , a , b , a-b);
    printf("%d/%d=%d...%d\n" , a , b , a/b , a%b);

    return 0;
}
