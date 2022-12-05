#include <stdio.h>
int main() {
    
    int age = 25;
    int chest = 95;
    char size;  //Declare variables and value
    
    if (age < 20) { //For age under 20
        if (chest < 85) {
            size = 'S';
        }
        
        if (85 <= chest < 95) {
            size = 'M';
        }
        
        if (95 <= chest) {
            size = 'L';
        }   //Determine size
    }
    
    else {  //For age over 20
        if (chest < 90) {
            size = 'S';
        }
        
        if (90 <= chest < 100) {
            size = 'M';
        }
        
        if (chest >= 100) {
            size = 'L';
        }   //Determine size
    }
    
    printf("사이즈는 %c입니다.\n", size);   //Print result
    
    return  0;
}
