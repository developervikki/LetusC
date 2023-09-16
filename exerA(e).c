#include<stdio.h>
main(){
	int ch='a'+'b';
	switch(ch){
		case'a':
		case 'b':
			printf("You Entered b\n");
		case'A':
			printf("a as in ashar \n");
		case 'b'+'a':
			printf("You Entered a and b\n");
		}
		return 0;
}
