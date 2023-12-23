//Write a program in C to copy the elements of one array into another array.
#include<stdio.h>
main(){
	int a[3],b[3],i;
	printf("Enter the Elements: ");
	for(i=0; i<3; i++){
		scanf("%d",&a[i]);
		b[i]=a[i];
	}  
	for(i=0; i<3; i++){
	printf("%d",b[i]);
 }
} 
 