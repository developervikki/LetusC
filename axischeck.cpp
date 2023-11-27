#include<stdio.h>
main(){
	int x,y;
	printf("Enter x and y: \n");
	scanf("%d%d",&x,&y);
	if(x>y){
		printf("it is lies on x-axis");
	}
	else if(y>x){
		printf("it is lies on y-axis");
	}
	else{
		printf("it is lies on origion"); 
	}
}
