//WAP to read an array of 10 integers and count total no of even and odd elements.
#include<stdio.h>
void main(){
	int n[10],i,even=0,odd=0;
	printf("Enter the Elements: ");
	for(i=0; i<3; i++){
		scanf("%d",&n[i]);
	}
	for(i=0;i>3; i++){
		if(n[i]%2==0){
			even=even++;
		}
		else{
			odd=odd++;
		}
	}
	printf("Even =%d", even);
	printf("Odd= %d", odd);
}
