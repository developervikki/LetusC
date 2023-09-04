//write a program to  find factorial of given number
#include<stdio.h>
#include<conio.h>
main()
{
	int a,f=1;
	printf("Enter A number for factorial value: ");
	scanf("%d",&a);
	while(a>0) 
	{
		f=f*a;
		a--;
	}
	printf("Factorial=%d\n",f);

	
}

