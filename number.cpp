#include<stdio.h>
main(){
	int number,a,b,c,d,e,d1,d2,d3,d4,d5;
	printf("Enter  5 Digit Number: ");
	scanf("%d",&number);
	a=number/10;
	d1=number%10;
	b=a/10;
	d2=a%10;
	c=b/10;
	d3=b%10;
	d=c/10; 
	d4=c%10;
	e=d/10;
	d5=d%10;
	printf(" Reverse is the given digit: %d%d%d%d%d\n",d1,d2,d3,d4,d5);
	if(d1==d5&& d2==d4 && d3==d3){
		printf("Original And Reversed Numbers are equal");
	}
	else{
		printf("Original And Reversed Numbers are not equal");
	}
	return 0;
}
