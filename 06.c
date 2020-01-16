//©u¸`§P©w

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>

int main()
{
    int mon=0;

    scanf("%d" , &mon);

    if(mon==3||mon==4||mon==5)
    {
        printf("Spring");
    }
    if(mon==6||mon==7||mon==8)
    {
        printf("Summer");
    }
    if(mon==9||mon==10||mon==11)
    {
        printf("Autumn");
    }
    if(mon==12||mon==1||mon==2)
    {
        printf("Winter");
    }

    else return 0;
}
