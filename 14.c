//判斷是否為迴文
//輸入一個正整數，迴文印出 ” 是 ” ；非回文印出 ” 否 ” 

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>

int main()
{
    int i=0 , j=0 , len=0;
    char temp[1000] , a[1000];
    while(fgets(temp , 1000 , stdin)!=NULL)
    {
        len = strlen(temp);
        temp[len-1] = '\0';
        for(i=len-2 ; i>=0 ; i--)
        {
            a[j]=temp[i];
            j++;
        }
        a[j] = '\0';
        if(strcmp(a , temp)==0)
        {
            printf("YES\n");
        }
        else printf("NO\n");

        i=0;
        j=0;
    }

    return 0;
}
