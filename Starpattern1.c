#include<stdio.h>
#include<conio.h>
main(){
	int n,row,col,space;
	printf("Enter the value of N:");
	scanf("%d",&n);
	for(row=1; row<=n; row++){  
		for(space=1; space<=n-row; space++){ 
			printf(" ");
		}
		for(col=1;col<=row; col++){
			printf("* \n"); 
			
		}
	}
}
