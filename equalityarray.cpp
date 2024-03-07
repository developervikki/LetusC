#include<stdio.h>
main()
{{
	int a,b;
	printf("Enter Five Digit Numbber: ");
	scanf("%d",&a);
	printf("Enter Reverse Number Of Above Numbber:");
	scanf("%d",&b); 
	if(a==b)
	{
		printf("Given Original And Reverse Number Equal");
	}
	else
	{
		printf("Given Original And Reverse Numbber Are not equal");
	}
}}
