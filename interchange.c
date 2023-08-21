#include<stdio.h>
main()
{
	int a,b,y;
	printf("Enter first Number: ");
	scanf("%d",&b);
	printf("Enter second Number: ");
	scanf("%d"&b);
	printf("a: %d , b: %d",a,b);
	y=a;
	a=b;
	b=y;
	printf("Interchange the content of a: %d And b: %d", a,b);
	return 0;
}
