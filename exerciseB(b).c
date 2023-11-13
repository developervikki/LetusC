#include<stdio.h>
main(){
	int size,i;
	scanf("%d",&size);
	int arr[size];
	for(i=1;i<=10;i++){
		scanf("%d",&arr[i]);
		printf("%d\n",arr[i]);
	}
	return 0;
}
