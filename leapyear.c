#include<stdio.h>
main()
{
	int y;
	printf("Enter Year: ");
	scanf("%d",&y);
	if(y%4==0){
		printf("This is a Leap year"); 
	} 
	else{
		printf("This is a not leap year");
	}
	return 0;
}
