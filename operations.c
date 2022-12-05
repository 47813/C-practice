#include <stdio.h>
int main() {
    
    double a = 4.0, b = 1.2;    //Declare 2 variables and values
    
    printf("%.1f + %.1f = %.1f \n", a, b, a+b);
    printf("%.1f - %.1f = %.1f \n", a, b, a-b);
    printf("%.1f * %.1f = %.1f \n", a, b, a*b);
    printf("%.1f / %.1f = %.1f \n", a, b, a/b); //Print each result of operators
    
    return 0;
}
