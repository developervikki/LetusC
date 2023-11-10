#include<stdio.h>
main(){
	int r,g,b, max=255;
	float c,m,y,k,w,black;
	printf("Enter Red value from 0 to 255: ");
	scanf("%d",&r);
	printf("Enter Green value from 0 to 255: ");
	scanf("%d",&g);
	printf("Enter Blue value from 0 to 255: ");
	scanf("%d",&b);
	w=max*r/255,max*g/255,max*b/255; 
	c=(w-r/255)/(w);
	m=(w-b/255)/w;
	y=(w-b/255)/(w);
	black=1-w;
	printf("cyan %f\n",c);
	printf("Magenta %f\n",m);
	printf("yello %f\n",y);
	printf("white %f\n",w);
	printf("black %f\n",black);
	if(r==g==b==0){
		printf("CMY value 0");
		
	}
	else{
		printf(" K value is 1");
	}
	
}
