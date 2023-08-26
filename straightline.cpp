#include<stdio.h>
main()

{  
    float x1, y1, x2, y2, x3, y3, m, n;  
  
    printf("Enter points (x1, y1)\n");  
    scanf("%f%f", &x1, &y1);  
  
    printf("Enter points (x2, y2)\n");  
    scanf("%f%f", &x2, &y2);  
  
    printf("Enter points (x3, y3)\n");  
    scanf("%f%f", &x3, &y3);  
  
    m = (y2 - y1) / (x2 - x1);  
    n = (y3 - y2) / (x3 - x2);  
  
    if( m == n)  
    {  
        printf("All 3 points lie on the same line\n");  
    }  
    else  
    {  
        printf("All 3 points do not lie on the same line\n");  
    }  
  
    return 0;  
} 
