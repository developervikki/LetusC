//write a program to print addition of two matrices
#include<stdio.h>
main(){
	int a[2][3],b[2][3],c[2][3],i,j;
	printf("Enter the first matrix Elements: ");
	for(i=0;i<2;i++){
		for(j=0;j<3; j++){ 
			scanf("%d",&a[i][j]);
		}
	}
	printf("Enter the Second matrix Elements: ");
	for(i=0; i<2; i++){
		for(j=0;j<3; j++){
			scanf("%d",&b[i][j]);
		}   
	}
	for(i=0; i<2; i++){ 
		for(j=0;j<3; j++){
			c[i][j]=a[i][j]+b[i][j];
			printf("%d \t", c[i][j]);
		}
		printf("\n");
	}
	
}
 