//Write a Program m to calculate simple interest
//si=(p*n*r)/100; 
#include<stdio.h>
#include<conio.h>
main()
{
	
	float p,n,r,si;
	printf("Principal Value: ");
	scanf("%f", &p); 
	printf("Time: ");
	scanf("%f", &n);
	printf("Rate Value: ");
	scanf("%f", &r);
	si=(p*n*r)/100;
	printf("Simple Intrest=%f ~", si);
	return 0;
}
