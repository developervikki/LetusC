// Write a Program to find volume and surface area of cuboid
//v=l*b*h;
//sa=2*(l*b+b*h+h*l)
#include<stdio.h>
#include<conio.h>
main()
{
	float l,b,h,v,sa;
	printf("Enter Value Of length of cuboid: ");
	scanf("%f",&l);
	printf("Enter Value Of Bidth of cuboid: ");
	scanf("%f",&b);
	printf("Enter Value Of height of cuboid: ");
	scanf("%f",&h);
	v=l*b*h;
	sa=2*(l*b+b*h+h*l);
	printf("%.3f Valume of Cuboid" ,v);
	printf(" %.3f surface Area Of Cuboid",sa);	
}
