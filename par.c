#include <stdio.h>
#include <string.h>


int check(int len, char word[]){
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
    char word[20];
    scanf("%s", &word);
    int len = strlen(word);
    if (check(len, word) == 0){
        printf("Not Palindrome");
    }
    else{
        printf("Parlindrome");
    }
    return 0;
}