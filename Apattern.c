     #include <stdio.h>    
int main() {      
    int i,j,k,height = 7;  
  
    for(i = 1; i <= height; i++) { 
        for (j = 1; j <= height - i; j++) {
            printf(" "); 
        }  
   
        for (k = 1; k <= (2 * i) - 1; k++) { 
            if (k == 1 || k == (2 * i) - 1 || i == height / 2 + 1) {  
                printf("*");
            } else { 
                printf(" ");
            }
        }

        printf("\n");
    }

    return 0;
}
 
