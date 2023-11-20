#include<stdio.h>
main(){
	int l,b,a,p;
	printf("Enter lenght of Rectangle: ");
	scanf("%d",&l);
	printf("Enter breadth of Rectangle: ");
	scanf("%d",&b);
	a=l*b;
	p=2*l+2*b; 
	if(a>p){
		printf("Area of ractangle is grater than Perimeter");
	}
	else{
		printf("perimter of rectangle is greater than area");
	}
	return 0;
}
