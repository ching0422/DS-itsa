//¦r®Ú»P¤l¦r¦ê

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
