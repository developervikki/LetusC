#include<stdio.h>
main(){
	int l,b,ra,rp;
	float cr,ca,cc; 
	printf("Enter length and breadth of rectangle:");   
	scanf("%d%d",&l,&b); 
	ra=l*b;  
	rp=2*(l+b);
	printf("area of rectangle %d \n perimeter of rectangle %d\n", ra,rp); 
	printf("Enter radius of circle:"); 
	scanf("%f",&cr);
	ca=3.14*cr*cr;
	cc=2*3.14*cr;
		printf("area of circle %f \n circumference of circle %f\n", ca,cc);
		return 0; 
 
	
}
 