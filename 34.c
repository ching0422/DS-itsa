//標準體重計算

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>

int main()
 {
     int h=0;
     int sex=0;
     float w=0;
     scanf("%d%d" , &h , &sex);
     if(sex==1)
     {
         w = (h-80)*0.7;
         printf("%.1f" , w);
     }
     else if(sex==2)
     {
         w = (h-70)*0.6;
         printf("%.1f" , w);
     }
     else return 0;

 }
