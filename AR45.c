//字串算字元
//輸入任一字串。
//輸出輸入之字串會有幾個字元。

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>

int main()
{
    char word[1000];
    int len=0;
    int cnt=0;
    char *ptr;

    fgets(word,1000,stdin);
    len = strlen(word);
    word[len-1] = '\0';

    ptr = word;

    while(*ptr!=NULL || *ptr!='\0')
    {
        cnt++;
        ptr++;
    }
    printf("There are %d characters" , cnt);

}
