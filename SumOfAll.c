#include <stdio.h>

int sum(int num);   //Declare new function

int main (){
    
    sum (10);
    sum (100);  //Input function
    
    return 0;
}

int sum(int num) {
    int count;
    int sumOfAll = 0;   //Set variables for counting and result
    
    for (count = 1; count <= num; count++) {
        sumOfAll += count;  //Add count to result
    }
    
    printf("1부터 %d 까지의 합은 %d 입니다.\n", num, sumOfAll); //Print result
}
