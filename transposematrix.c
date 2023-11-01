//WAP to print transpose of a matrix
#include<stdio.h>
void main( ){
	int a[2][3],i,j,sum=0;
	printf("Enter the elements: ");
	for(i=0; i<2; i++){
		for(j=0; j<3; j++){
			scanf("%d", &a[i][j]);
		}
	} 
	for(i=0;i<3;i++){
		for(j=0; j<2; j++){
			printf("\t %d \t",a[j][i]);
		}
		printf("\n");
	}
}
 