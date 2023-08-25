#include<stdio.h>
main(){
	int cprice,sprice;
	printf("Enter Cost Price: ");
	scanf("%d",&cprice);
	printf("Enter Selling Price: ");
	scanf("%d",&sprice);
	if(sprice>cprice){
		int p=sprice-cprice;
		printf("Profit is %d ", p);
		
	}
	else{
		int l=cprice-sprice;
		printf("loss is: %d",l);
	}
	return 0;
}
