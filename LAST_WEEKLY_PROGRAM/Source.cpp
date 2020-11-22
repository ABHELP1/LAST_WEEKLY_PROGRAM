#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<ctype.h>
int isPalindrome(char* string) {
    for (int i = 0; i < strlen(string) / 2; i++)
        if (toupper(string[i]) != toupper(string[strlen(string) - 1 - i]))
            return 0;
    return 1;
}
int main() {
    char letter[201], copy[201] = {};
    int len, copyCount = 0;
    scanf("%s", letter);
    if (isPalindrome(letter)) {
        for (int i = 0; i < strlen(letter) / 2; i++) {
            copy[copyCount++] = letter[i];
        }
        if (isPalindrome(copy)) {
            copyCount = 0;
            len = strlen(letter) % 2 == 0 ? strlen(letter) / 2 : strlen(letter) / 2 + 1;
            for (int i = len; i < strlen(letter); i++) {
                copy[copyCount++] = letter[i];
            }
            if (isPalindrome(copy)) {
                printf("Double Palindrome");
            }
            else {
                printf("Palindrome");
            }
        }
        else {
            printf("Palindrome");
        }
    }
    else {
        printf("No");
    }
}