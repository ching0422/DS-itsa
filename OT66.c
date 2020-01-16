//¦¨ÁZ·j´M

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>

int main()
{
    int a[100],n=0,i=0;
    int max;

    scanf("%d",&n);
    for(i=1 ; i<=n ; i++)
    {
        scanf("%d",&a[i]);
    }
    max = a[1];
    for(i=1 ; i<=n ; i++)
    {
        if(a[i]>max)
        {
            max = a[i];
        }
    }
    printf("%d\n",max);
}
