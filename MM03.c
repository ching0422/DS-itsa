//�p���`�M�B���n�B�t�B�өM�l��

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
