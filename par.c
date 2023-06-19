#include <stdio.h>
#include <string.h>

char word[20];

int check(int len; char word){
    int i = 0;
    while (i <= len){
        if(word[i] != word[(len-1)-i]){
            i++;
            return 0;
        }
        break;
    }
    return 1;
}

int main() {
    scanf("%s", &word);
    int len = strlen(word);
    if check() == 0{
        printf("Not Palindrome");
    }
    else{
        printf("Parlindrome");
    }
    return 0;
}