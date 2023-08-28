#include<stdio.h>
main(){
	float h,c,t;
	printf("Enter hardness value greater than 50:");
	scanf("%f",&h);
	printf("Enter carbon content value less than 0.7:");
	scanf("%f",&c);
	printf("Enter tensile strength value greater than 5600:");
	scanf("%f",&t);
	if(h>50 && c<0.7 && t>5600){
		printf("Grade 10");
	}
	else if(h>50 && c<0.7){
		printf("Grade 9");
	}
	else if(c<0.7 && t>5600){
		printf("Grade 8");
	}
	else if(h>50 && t>5600){
		printf("Grade 7");
	}
	else if(h>50 || c<0.7 || t>5600)
	{
		printf("Grade 6");
	}
	else{
		printf("Grade 5");
	}
	return 0;
}
