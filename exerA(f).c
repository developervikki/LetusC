#include<stdio.h>
main(){
	int i=1;
	switch(i-2){
		case -1:
			printf("feeding fish \n");
		case 0:
			printf("Weeding grass \n");
		case 1:
			printf("Mending roof\n");
			default:
				printf("Just to survive\n");
	}
	return 0;
}
