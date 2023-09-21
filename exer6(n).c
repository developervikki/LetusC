#include<stdio.h>
#include<conio.h>
int main()
{
    int i, j, k, count=1;

    for(i=1;i<=4;i++)
    {
        
        for(j=1;j<=4-i;j++)
        {
            printf(" ");
        }

        for(k=1;k<=i;k++)
        {
            printf(" %d",count);
            count++;
        }

    printf("\n");

    }
}
