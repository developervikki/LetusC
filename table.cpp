
//write a program to write table to given number
#include<stdio.h>
main()
{
 int number,table;
 printf("Table \n");
    printf("Enter A number: ");
     scanf("%d",&number); 
	  for (int i = 1; i <= 10; i++) 
	  
	{
      table=i*number;
         printf("%d\n",table);
}
}
