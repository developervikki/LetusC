#include<stdio.h>
main(){
	int a,b,c;
	printf("Enter Ram Age: ");
	scanf("%d",&a);
	printf("Enter Shyam Age: ");
	scanf("%d",&b);
	printf("Enter Ajay Age: ");
	scanf("%d",&c);
	if(a<b && a<c){
		printf("Ram youngest of the three");
	}
	else if(b<a && b<c){
		printf("Shyam youngest of the three");
	}
	else{
		printf("AJay youngest of the three");
	
	}
	return 0;
	
} 
