#include<stdio.h>
#include<conio.h>
int main()
{
    int ms = 21, uc, cc;
    while(ms>=1)
    {
        printf("Total Match Sticks: %d\n", ms);
        printf("Pick up the match sticks between (1 to 4): ");
        scanf("%d", &uc);

        if(uc>4)
        {
            printf("Invalid Entry");
            break; 
        }
        cc = 5 - uc;
        printf("Computer picks up the %d match sticks.\n", cc);
        ms = ms-uc-cc;
        if(ms==1)
        {
            printf("\n computer win.");
            break;
        }
    }
    return(0);
}
