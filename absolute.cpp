#include<stdio.h>
main(){
	int num,a;
	printf("Enter A number: ");
	scanf("%d",&num); 
	
	if(num<0){ 
		a=-(num); 
		printf("Absolute value is %d",a); 
	}
	else
	{
		
		printf("Absolute value is  %d",num);
	}
}
