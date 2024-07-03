#include<stdio.h>
main()
{ 
  int bs;  
  float da,ra,gs;
  printf("Enter Ramesh's Basic Salary : ");   
  scanf("%d",&bs); 
  da=bs*40/100;  
  ra=bs*20/100;    
  gs=bs-da-ra; 
  printf("Gross Salary of Ramesh is %f",gs);   
  return 0;    
}
     
