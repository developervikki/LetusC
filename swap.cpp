//WAP to swap two number using call by refrence
#include<stdio.h>
void swap(int *,int *);
main()
{ 
	int a,b;
	printf("Enter two number:");
	scanf("%d%d",&a,&b);
	swap(&a,&b);//calling of function
	printf("a=%d\nb=%d\n",a,b);
	
}
void swap(int*x,int*y)
{
	int t;
	t=*x;
	*x=*y;
	*y=t; 
}
