// program to print multiplication of two matrices
#include<stdio.h>
#include<stdio.h>
main(){
	int a[3][3],b[3][3],c[3][3],i,j,sum, k;
	printf("Enter the first matrix Elements: ");
	for(i=0; i<3; i++){
		for(j=0;j<3; j++){
			scanf("%d",&a[i][j]);
		}
	}
	printf("Enter the Second matrix Elements: ");
	for(i=0; i<3; i++){
		for(j=0;j<3; j++){
			scanf("%d",&b[i][j]);
		}
	}
	for(i=0; i<3; i++){
		for(j=0;j<3; j++){ 
			sum=0;
			for(k=0;k<3; k++){
			sum=sum+a[i][k]*b[k][j];
			c[i][j]=sum;
			printf("%d \t", c[i][j]);
			
			} 
		}
		printf("\n");
	}
	
}
