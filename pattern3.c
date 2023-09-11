#include<stdio.h>
main(){
	int n,r,c;
	printf("How Many lines: ");
	scanf("%d",&n);
	for(r=1;r<=n;r++){
		for(c=1;c<=2*r-1;c++){
			printf("*");
			
		}
		printf("\n");
	}
	getch();
	
}
