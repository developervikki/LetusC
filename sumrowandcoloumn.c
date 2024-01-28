//Program to point sum of individual rows and columns
#include<stdio.h>
main(){
	int a[3][3],i,j,sr,sc;
	printf("Enter the Elements: ");
	for(i=0; i<3; i++){
		for(j=0;j<3;j++){
			scanf("%d", &a[i][j]); 
		}
	}
	for(i=0;i<3;i++){
		sr=sc=0;
		for(j=0;j<3;j++){
			sr=sr+a[i][j];
			sc=sc+a[j][i];
		}
		printf("SR= %d, SC=%d\n",sr,sc); 
	}
}
