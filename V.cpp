#include<stdio.h>
main(){
	int i,j,n=7,s;
	for(i=1; i<=4; i++){
		for(j=1; j<=n; j++){
			if(i==j || i+j==n+1){
				printf("*"); 
			} 
			else{ 
				printf(" ");  
			}
		}
		printf("\n");  
	}  
	return 0; 
}
 