#include<stdio.h>
main()
{
   int i,j,s,rows,k;
   printf("Input number of rows : ");
   scanf("%d",&rows);
   s=rows+4-1;
   for(i=1;i<=rows;i++)
   {
         for(k=s;k>=1;k--)
            {
              printf(" ");
            }
                      
	   for(j=1;j<=i;j++)
	   printf("%d ",i);
	printf("\n");
    s--;
   }
}
