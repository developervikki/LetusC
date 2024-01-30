#include<stdio.h>
main(){
	float num;
	printf("Enter the Number: ");
	scanf("%f",&num);
	if(num>0){
		printf("Positive number"); 
	}
	else if(num<0){ 
		printf("Negative number");

	}
	else
	{
		printf("You Entered Zero");
	}
}
