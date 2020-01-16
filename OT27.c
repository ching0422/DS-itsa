//BMI

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>

int main()
{
    int a=0;
    float h=0;
    float w=0;
    float b=0;
    float c=0;
    float k=0;

    scanf("%d " , &a);

    for(int i=0 ; i<a ; i++)
    {
        scanf("%f" , &h);
        scanf("%f" , &w);
        c = h/100 ;
        k = c*c;
        b = w/k;
        if(b<18.5){ printf("%.1f Underweight\n" , b); }
        else if(18.5<=b && b<=23.9) { printf("%.1f Normalweight\n" , b); }
        else if(24<=b && b<=27.9) { printf("%.1f Overweight\n" , b); }
        else if(b>=28) { printf("%.1f Obese\n" , b); }
    }
    return 0;
}
