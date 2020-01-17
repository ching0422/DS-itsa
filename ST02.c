//迴文字串
//輸入分為兩部份，第一行表示有幾個要輸入的字串，第二部份是所要改變的字串
//輸出經轉換後的迴文字串。

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>

int main()
{
    int i=0, j=0, len=0;
    int num=0;
    char temp[1000], a[1000];

    scanf("%d", &num);

    for(int r=0 ; r<=num ; r++)
    {
        fgets(temp,1000,stdin);
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
        printf("\n");

        for(int h=0 ; h<j ; h++)
        {
            a[h] = '\0';
        }
        i=0;
        j=0;

    }



    return 0;
}
