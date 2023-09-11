#include<stdio.h>
main(){
	int n,c,sp,r;
	printf("How many steps: ");
	scanf("%d",&n);
	for(r=1;r<=n;r++){
		for(sp=1;sp<=n-r;sp++)
		printf(" ");
		for(c=1;c<=2*r-1;c++)
		printf("*");
		printf("\n");
		
	}
	for(r=n-1;r>=1;r--){
		for(sp=1;sp<=n-r;sp++)
		printf(" ");
		for(c=1;c<=2*r-1;c++)
		printf("*");
		printf("\n");
	}
	getch();
}
