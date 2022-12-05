#include <stdio.h>
int main() {
    
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {   //For 5 x 5 table
            if (i == j) {
            printf("*");
            continue;   //Print * if i and j are the same (the middle star)
            }
            
            if (i + j == 4) {
                printf("*");
                continue;
            }   //Print * if i + j == 4 (the stars except the middle star)
            
            else {
                printf(" ");
            }
         }
         
         printf("\n");  //Print new line every row
    }
    
    return 0;
}
