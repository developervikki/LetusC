#include<stdio.h>
#include<conio.h>
main()
{
  float dkm, m,f,i,c;
  printf("Enter distance between two cities in KM: ");
  scanf("%f",&dkm);
  m=dkm*1000;
  f=dkm*3280.83;
  i=dkm*39370.078;
  c=dkm*100000;
  printf(" distance between two cities in Meters %f \n distance between two cities in Feets %f \n distance between two cities in inches %f \n distance between two cities in centimeters %f ",m,f,i,c);
  
  return 0;
}
 