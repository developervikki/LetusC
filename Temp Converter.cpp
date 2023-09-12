//Temparature  Converter
/*for c to f;
f=(9*c)/5+32
for f to c:
c=(f-32)*5/9;
*/
#include<stdio.h>
main()
{
	int ch;
	float C,F;
	printf("Press 1 For C To F\n ");
	printf("Press 2 For F to C\n ");
	scanf("%d",&ch);
	switch(ch)
	{
		case 1:
			printf("Enter Temp In C: ");
		    scanf("%f",&C);
		    F=(9*C)/5+32;
		    printf("Temp In F=%.2\n",F);
		break;
		case 2:
			printf("Enter Temp In F: ");
			scanf("%f",&F);
		    C=(F-32)*5/9;
		    printf("Temp In C=%.2\n",C);
		    break ;
		    default:
			printf("Invalid Choice\n");
		}
}

