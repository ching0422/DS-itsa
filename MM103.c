//費式數列
//第一個月有一對剛誕生的兔子，第二個月之後牠們可以生，每月每對可生育的兔子會誕生下一對新兔子，兔子永不死去
//輸入一個正整數n，代表經過n個月之後。
//印出兔子的總數。

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>

int main()
{
  int N,i;
  int f[100]={0};

  scanf("%d" , &N);
    f[0] = 0;
    f[1] = 1;
    if(N==0) {printf("%d\n",f[N]);}
    else if(N==1) {printf("%d\n",f[N]);}
    else
    {
      for(i=2 ; i<=N ; i++)
      {
        f[i] = f[i-1] + f[i-2];
      }
      printf("%d\n" , f[N]);
    }

   return 0;
}
