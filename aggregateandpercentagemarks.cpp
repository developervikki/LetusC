//write a program to find aggregate and percentage marks
#include<stdio.h>
main(){
	int s1,s2,s3,s4,s5;
	printf("Enter Five Subjects Marks: \n");
	scanf("%d%d%d%d%d",&s1,&s2,&s3,&s4,&s5);  
	int agg=s1+s2+s3+s4+s5; 
	float p=agg*100/500;
	printf("Aggregate marks %d \n" , agg);
	printf("Percentage marks %f", p);
	return 0;
} 
