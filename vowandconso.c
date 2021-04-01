//Program to check whether alphabet is vowel or consonant.
#include <stdio.h>//header file
int main() {
    char c;
    int lowercase_vowel, uppercase_vowel;
    printf("Enter an alphabet: ");
    scanf("%c", &c);//scanning input
    lowercase_vowel = (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');

    uppercase_vowel = (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U');

   //checking condition
    if (lowercase_vowel || uppercase_vowel)
        printf("%c is a vowel.", c);//alphabet is a vowel
    else
        printf("%c is a consonant.", c);//alphabet is a consonant
    return 0;
}