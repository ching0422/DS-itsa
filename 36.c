//ен╢|ж~

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
