//¶O¦¡¼Æ¦C

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
