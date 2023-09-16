#include<stdio.h>
main(){
	char suite=3;
	switch(suite){
		case 1:
			printf("Diamond\n");
		case 2:
			printf("Spade \n");
		default:
			printf("Heart \n");
	}
	printf("I Thought one wears a suite \n");
	return 0;
}
