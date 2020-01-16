//°j¤å¦r¦ê

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>

int main()
{
    int i=0, j=0, len=0;
    int num=0;
    char temp[1000], a[1000];

    scanf("%d", &num);

    for(int r=0 ; r<=num ; r++)
    {
        fgets(temp,1000,stdin);
        len = strlen(temp);
        temp[len-1] = '\0';
        for(i=len-2 ; i>=0 ; i--)
        {
            a[j]=temp[i];
            j++;
        }
        a[j] = '\0';

        for(int k=0 ; k<j ; k++)
        {
            printf("%c", a[k]);
        }
        printf("\n");

        for(int h=0 ; h<j ; h++)
        {
            a[h] = '\0';
        }
        i=0;
        j=0;

    }



    return 0;
}
