#include<stdio.h>
main()
{
	int ndays, years, weeks, days;
	printf("Enter Number Of  days: ");
	scanf("%d", &ndays);
	years=ndays/365;
	weeks=(ndays%365)/7;
	days=(ndays%365)%7;
	printf("Years: %d week: %d days: ",years,weeks,days);
	
}
 