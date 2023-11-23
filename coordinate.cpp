//  Write a Program to accept a coordinate point in a XY coordinate system and determine its quadrant
#include<stdio.h>
#include<conio.h>
int main()
{
    int x,y;
    printf("Enter the value of x and y Coordinate: ");
    scanf("%d%d",&x,&y);
    
    if(x>0 && y>0)
        printf("The coordinate point (%d,%d) lies in the First quadrant",x,y); 
    else if(x<0 && y>0)
          printf("The coordinate point (%d,%d) lies in the second quadrant",x,y);
    else if(x<0 && y<0)
          printf("The coordinate point (%d,%d) lies in the third quadrant",x,y);
    else if(x>0 && y<0)
          printf("The coordinate point (%d,%d) lies in the Fourth quadrant",x,y);
    else if(x==0 && y==0)
          printf("The coordinate point (%d,%d) lies in the origin",x,y);
             
      return 0;
}


