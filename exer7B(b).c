#include<stdio.h>
main(){
	int temp;
	printf("Enter the value of temp: ");
	scanf("%d",&temp);
	/*switch(temp)
	{
		case (temp<=20):
			printf("Oooooh! Damn Cool ! \n");
		case(temp>20 && temp<30): 
			printf("Rain rain here again \n");
		case(temp>30 && temp<=40):
			printf("Wish I am on Everest \n");
		deafult:
			printf("Good old nagpur weather \n");
	}*/
	if(temp<=20)
	{
		goto damn;
	}
	else if(temp>20 && temp<30){
		goto Rain;
		
	}
	else if(temp>30 && temp<=40)
	{
		goto Everest;
	}
	else{
		printf("Good old nagpur weather \n");
	}
	damn:
		printf("Oooooh! Damn Cool ! \n");
	Rain:
		printf("Rain rain here again \n");
	Everest:
		printf("Wish I am on Everest \n");


	return 0;
}
