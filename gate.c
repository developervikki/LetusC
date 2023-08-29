#include<stdio.h>
#include<conio.h>
int main()
{
	int a,b;
	int output;
	printf("\nNote: Only use  0 or 1");
	printf("\n Enter or gate input");
	printf("\n\nEnter input A : ");
	scanf("%d", &a);
	printf("Enter input B : ");
	scanf("%d", &b);
	output=a+b;
	printf("Output of the Given or gate=%d",output);
	
	printf("\n\nNote: Only use  0 or 1");
	printf("\n Enter And gate input");
	printf("\nEnter  input A : ");
	scanf("%d", &a);
	printf("Enter  input B : ");
	scanf("%d", &b);
	output=a*b;
	printf("\nOutput of the given And gate=%d",output);
	
	printf("\n\nNote: Only use  0 or 1");
	printf("\n Enter Not gate input");
	printf("\nEnter  input A : ");
	scanf("%d", &a);
	if (a=0,1)
	output=1,0;
	printf("\n Output given Not gate=%d",output);
}
