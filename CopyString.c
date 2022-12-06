#include <stdio.h>
#include <String.h>

int main() {
    char str[];
    char str1[];
    char star = "********";
    
    printf("단어입력: ");
    scanf("%s", str);
    
    if (strlen(str) <= 5) {
        strcpy(str1, str);
    }
    
    else {
        strncpy(str1,str,5);
        strncat(str1, star,strlen(str)-5);
    }
    
    printf("%s", str1);
}
