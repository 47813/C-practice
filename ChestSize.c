#include <stdio.h>
int main() {
    
    int chest = 95;
    char size;   //Declare variables and value
    
    if (chest <= 90) {
        size = 'S';   //Size 'S' if chest is smaller than 90
    }
    
    else if (90 <= chest <= 100) {
        size = 'M';   //Size 'M' if chest is bigger than 90 and smaller than 100
    }
    
    else {
        size = 'L';   //Size 'L' if chest is bigger than 100
    }
    
    printf("%c", size);   //Print size
    
    return 0;
}
