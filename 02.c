//­^­љТрЄНЈН

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>

int main()
{
    float inch=0;
    float km=0;

    scanf("%f" , &inch);
    if(inch!=0)
    {
        km = inch * 1.6;
    }

    printf("%.1f" , km);

    return 0;
}
