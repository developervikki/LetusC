#include <stdio.h>

int main() {
    int i,j, height = 7; 

    for (i = 1; i <= height; i++) {
        for (j = 1; j <= height; j++) {
            if ((i == 1 || i == height || i == height / 2 + 1) ||
                (i < height / 2 + 1 && j == 1) ||  
                (i > height / 2 + 1 && j == height)) {  
                printf("*");  
            } else { 
                printf(" "); 
            }
        }
        printf("\n");
    }

    return 0;
}
 