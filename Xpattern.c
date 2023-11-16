#include<stdio.h>
main(){
	int i,j,n=5,s;
	for(i=1; i<=n; i++){
		for(j=1; j<=n; j++){
			if(i==j || i+j==n+1){
				printf("X");
			}
			else{
				printf(" ");
			}  
		}
		printf("\n");
	}
	return 0;
}
 