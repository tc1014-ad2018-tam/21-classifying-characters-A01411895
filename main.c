//Luis Ignacio Acosta Zamora A01411895
/*
 * Write a program that classifies the characters of any given string in:
 * Alphabeth:
    * Vowels
    * Consonants
 * Digits.
 * Special characters.
 * Spaces.
 */

#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main() {
    //Create a string with a fix value.
    char string[1000];

    //Request the user a string.
    printf("Please write anything: ");
    fgets(string, sizeof(string), stdin);

    //Create variables that will be used to store the amount of presented characters.
    int vowelCount = 0;
    int consonantCount = 0;
    int digitCount = 0;
    int specialCharacterCount = 0;
    int spacesCount = 0;

    //Use a for loop to check all characters in the string, if any of them fall in a specific criteria, their
    //respective counter will increase.
    for (int i = 0; i < strlen(string)-1; ++i) {
        if(string[i] == ' '){
            spacesCount++;
        } else{
            if(isdigit(string[i])){
                digitCount++;
            }else{
                if(ispunct(string[i])){
                    specialCharacterCount++;
                }else{
                    switch(toupper(string[i])){
                        case 'A':
                        case 'E':
                        case 'I':
                        case 'O':
                        case 'U':
                            vowelCount++;
                            break;
                        default:
                            consonantCount++;
                    }
                }
        }
        }
    }

    //Print all the counters with their specific stored values.
    printf("\nWhat you wrote contained a total of: \n");
    printf("%d vowel(s).\n", vowelCount);
    printf("%d consonant(s).\n", consonantCount);
    printf("%d digit(s).\n", digitCount);
    printf("%d special character(s).\n", specialCharacterCount);
    printf("%d space(s).\n", spacesCount);

    return 0;
}