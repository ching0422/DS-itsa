//標準體重計算

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>

int main()
{
    int d=0;
    float s=0;
    float us=0;

    scanf("%d" , &d);

    if(d<=120)
    {
        s = d * 2.10;
        us = d * 2.10;
        printf("Summer months:%.2f\n" , s);
        printf("Non-Summer months:%.2f\n" , us);
    }
    else if(d<=330 && 121<=d)
    {
        s = d * 3.02;
        us = d * 2.68;
        printf("Summer months:%.2f\n" , s);
        printf("Non-Summer months:%.2f\n" , us);
    }
    else if(d<=500 && 331<=d)
    {
        s = d * 4.39;
        us = d * 3.61;
        printf("Summer months:%.2f\n" , s);
        printf("Non-Summer months:%.2f\n" , us);
    }
    else if(d<=700 && 501<=d)
    {
        s = d * 4.97;
        us = d * 4.01;
        printf("Summer months:%.2f\n" , s);
        printf("Non-Summer months:%.2f\n" , us);
    }
    else if(d>=701)
    {
        s = d * 5.63;
        us = d * 4.50;
        printf("Summer months:%.2f\n" , s);
        printf("Non-Summer months:%.2f\n" , us);
    }

}
