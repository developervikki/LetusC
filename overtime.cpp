#include<stdio.h>
main(){
	float otpay;
	int hour, i=1;
	while(i<=10){
		printf("Enter number of hours worked: ");
		scanf("%d",&hour);
		if(hour>=40){ 
			otpay=(hour-40)*12;
		}
		else
		otpay=0;
		printf("Hourse=%d overtimepay=Rs=%f\n",hour,otpay);
		i++;
	}
}
