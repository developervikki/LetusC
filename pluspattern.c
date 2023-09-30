#include<stdio.h>
main(){
	int i,j,n;
	printf("Enter the number of rows :");
	scanf("%d",&n);
	for(i=1; i<=n; i++){
		for(j=1;j<=n; j++)
		{
			if(i==(n/2)+1 || j==(n/2)+1){
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
