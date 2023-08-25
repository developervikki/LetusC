#include<stdio.h>
main()
{
	int a;
	printf("Enter A number: ");
	scanf("%d",&a);
	if(a%2==0)
	{
		printf("%d Number is Even",a);
	}
	else{
		printf("%d Number is Odd",a);
	}
	return 0;
}
