#include<stdio.h>
main(){
	int a,b,c,d;
	printf("Enter three sides of triangle: ");
	scanf("%d%d%d",&a,&b,&c);
	if(a==b==c){
		printf("Equilateral Triangle");
	}
	else if (a=b || a==c){
		printf("Isoceles Triangle");
	}
	else if (c=a^2+b^2)
	{
		printf("Right Angle Triangle");
	}
	else{
		printf("scalene Triangle");
	}
	return 0;
}
 