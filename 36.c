//平、閏年判定
//輸入西元年份，輸出閏年(Bissextile Year)或平年(Common Year)

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>

int main()
{
    int year;

    scanf("%d",&year);

    if(year%4 == 0)
    {
        if( year%100 == 0)
        {
            if ( year%400 == 0)
                printf("Bissextile Year");
            else
                printf("Common Year");
        }
        else
            printf("Bissextile Year");
    }
    else
        printf("Common Year");

    return 0;
}
