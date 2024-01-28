#include<stdio.h>
main(){
	float c1,f1,c2,f2;
	printf("Enter temperature in Fahrenheit: ");
	scanf("%f",&f1);  
	c1=(f1-32)*5/9;
	printf("Temperature in centigrade: %f\n",c1);
	printf("Enter temperature in Centigrade: ");
	scanf("%f",&c2);
	f2=32+(9/5)*c2; 
	printf("Temperature in Fahrenheit: %f",f2);
	
	return 0; 
} 
 