//write a program to read marks of 5 students calculate sum and avg  using array.
#include<stdio.h>
void main(){
	int marks[5], i;
	float sum=0,avg;
	printf("Enter the marks:");
	for(i=0;i<5;i++){
		scanf("%d",&marks[i]); 
	 }
	for(i=0; i<5; i++){
		sum=sum+marks[i];
		
	}
	avg=sum/5;
	printf("sum= %f \n",sum);
	printf("average= %f",avg);
}
