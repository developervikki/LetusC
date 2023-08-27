/*write a program maximum value of a list having ten numbers*/
#include<stdio.h>
main()
{
	int list[10],i,max;
	printf("Enter ten Number\n");
	for(i=0;i<10; i++)
	{
		scanf("%d",&list[i]);
	}
	max=list[0];
	for(i=1;i<10;i++)
	{
		if(max<list[i])
		{
			max=list[i];
		}
	}
	printf("Maximum Number=%d\n",max);
}
