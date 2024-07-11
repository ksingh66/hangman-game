#include "hangman_helpers.h"

#include <stdbool.h>
#include <stdio.h>
#include <string.h>
bool is_lowercase_letter(char c) {
    if (c > 96 && c < 123) {
        return true;
    } else {
        return false;
    }
}

bool is_valid_secret(const char *secret) {
    int length = 0;
    while (*secret != '\0' ) {
        secret++; // Move to the next character
        length++; // Increment the length counter
    }
    // Reset the pointer to its original position
    secret -= length;
    // Check if the string is longer than 256 characters
    if (length > 256) {
        printf("the secret phrase is over 256 characters\n");
        return false;
    } else {
        while (*secret != '\0') {
            if ( *secret < 97) {
                if (*secret != 32&& *secret != 45 &&*secret != 39){
		printf("invalid character: '%c'\n", *secret);
		printf("the secret phrase must contain only lowercase letters, spaces, hyphens, and apostrophes\n");
                return false;}
            }
            secret++;
        }
        secret -= length;
        return true;
    }
}

bool string_contains_character(const char *s, char c) {
    int len = 0;
    while (*s != '\0') {
        if (c == *s) {
            return true;
        }
        s++;
        len++;
    }
    s -= len;
    return false;
}

char read_letter(void){
	char c;
	printf("Guess a letter: ");
	scanf("    %c",
		&c);
	getchar();
	return c;
}
int print_hanger(int mistakes) {
    printf("%s", arts[mistakes]);
    printf("\n");
    return 0;
}
void starting(int length, const char *string) {
    printf("    Phrase: ");
    
    for (int i = 0; i < length; i++) {
        if (string[i] == 32 || string[i] == 39 || string[i] == 45) {
            printf("%c", string[i]);
	    
        } else {
            printf("_");
        }

    }
   
    printf("\n");
    printf("Eliminated: \n\n");
}
void replacer(char *real_string, char *editable_string,const char guess){
	int i = 0;
	while (real_string[i]!='\0'){
		if (guess == real_string[i]){
			editable_string[i]=guess;
			}
		i++;

		}
	} 
void print_string(char *string){
	while (*string != '\0'){
		printf("%c",*string);
		string++;
		}
	}
int dash_counter(char *string){
	int count = 0;
	while (*string !='\0'){
		if (*string == '_'){count=count+1;}
		string++;
		}
	return count;
	}
