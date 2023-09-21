#include<stdio.h>
#include<conio.h>
int main()
{
    int h;

    for(h=0;h<=23;h++)
    {
        if(h==0)
        {
            printf("12 Midnight\n");
            continue;
        }

        if(h<12)
        {
            printf("%d AM\n",h);
        }


        if(h==12)
        {
            printf("%d Noon\n",h);
        }


        if(h>12)
        {
            printf("%d PM\n",h%12);
        }

    }
}
