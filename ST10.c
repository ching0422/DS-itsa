//星號印三角形

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>

int main()
{
    int x=0 , y=0 , i=0;

    scanf("%d" , &x);

    for(y=1 ; y<=(x+1)/2 ; y++)
    {
        for(i=0 ; i<(x+1)/2-y ; i++)
        {
            printf(" ");
        }
        for(i=0 ; i<(y*2-1) ; i++)
        {
            printf("*");
        }
        printf("\n");
    }


    return 0;
}
