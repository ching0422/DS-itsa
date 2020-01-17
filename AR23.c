//字根與子字串
//輸入為兩列字串 s 、 t ，字串大小在 1 到 100 之間，字串只會由英文字母構成。
//假如 s 是 t 的子字串，則輸出 YES ，否則輸出 NO 。

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>

int main()
{
    char line[1000];
    char line2[1000];
    char *ptr;
    char *qtr;
    char *a;

    scanf("%s" , &line);
    scanf("%s" , &line2);

    ptr = line;
    qtr = line2;

    if(a=strstr(qtr,ptr)!=NULL)
    {
        printf("YES");
    }
    else printf("NO");

}
