#include<stdio.h>
main(){
	int n,f=1,fl,i;
	printf("Enter 1 Find Factorial of a number: ");
	printf("Enter 2 Find Prime or not  number: ");
	printf("Enter 3 Find odd or even number: ");
	printf("Enter 4 for exit");
	scanf("%d",&n);
	switch(n){
		case 1:
			for(f=1; n>0; n--)
			{
				f=f*n;
			}
			printf("Factorial=%d\n",f);
			break;
			
		case 2:
			 if (n == 0 || n == 1)
    			fl = 1;

  				for (i = 2; i <= n / 2; ++i)
			 	{

    			if (n % i == 0) 
				{
      			fl = 1;
      			}
  				}
    
  				if (fl == 0){
			  
    			printf("%d is a prime number.", n);
    			}
  				else{
			  
    			printf("%d is not a prime number.", n);}
    			break;
				}
		
		 		case 3:
					if(n%2==0){
						printf("Number is Even ")
					}
					else{
					printf("Number is odd")
					}
		}
