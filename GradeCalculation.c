#include <stdio.h>

int main() {
    
    int kor = 3;
    int eng = 4;
    int math = 5;
    
    int credits;
    int res;
    
    double kscore = 3.8;
    double escore = 4.4;
    double mscore = 3.9;
    double grade;   //Declare variables and values
    
    credits = kor+eng+math;
    grade = (kscore+escore+mscore)/3;
    res = (credits >= 10 && grade > 4.0);   //Variable 'res' takes a boolean value which prints 0 (false) or 1 (true)
    printf("%d", res);
    
    return 0;
}
