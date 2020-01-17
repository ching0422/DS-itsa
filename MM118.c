//數字反向排列
//輸入一個正整數。
//輸出一個正整數，其為輸入整數之反向排列。

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>

int main()
{
    int i=0, j=0, len=0;
    char temp[1000], a[1000];
    fgets(temp, 1000, stdin);

    len = strlen(temp);
    temp[len-1] = '\0';
    for(i=len-2 ; i>=0 ; i--)
    {
        a[j]=temp[i];
        j++;
    }
    a[j] = '\0';

    for(int k=0 ; k<j ; k++)
    {
        printf("%c", a[k]);
    }

    return 0;
}
