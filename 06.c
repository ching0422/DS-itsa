//季節判定
//撰寫一程式，可輸入月份，然後判斷其所屬的季節
//（ 3~5 月為春季，6~8 月為夏季， 9~11 月為秋季， 12~2 月為冬季）

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
