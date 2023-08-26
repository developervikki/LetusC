#include<stdio.h>
main(){
	int height,width, i, n,a,b,c;
	printf("Enter Height: ");
	scanf("%d",&height);
	printf("Enter Width: ");
	scanf("%d",&width);
	printf("N:");
	scanf("%d",&n);
     for(i=0; i<n; i++){
     	printf("A%d= %dmm x %dmm \n",i,height,width);
     	a=height/2;
     	height=width;
     	width=a;
	 }
}
