//Write a Program to make a simple calculator based on user choice
#include<stdio.h>
#include<conio.h>
main()
{
	int n1,n2,res=0,ch;
	printf("Enter Two Number:");
	scanf("%d%d",&n1,&n2); 
	printf("Chose For Calculation\n");
	printf("chose 1 for addition\n ");
	printf("chose 2 for substraction\n "); 
	printf("chose 3 for Multiplextion\n ");
	printf("chose 4 for Division\n ");
	scanf("%d",&ch);
	switch(ch)
	{
		case 1:
		    res=n1+n2;
		break;
		case 2:
		    res=n1-n2;
		break;
		case 3: 
		    res=n1*n2;
		break;
		case 4:
		    res=n1/n2;
		break;
		default:
			printf("Invalid Choice\n");
		
	}
	printf("Result=%d\n",res);
	
}
