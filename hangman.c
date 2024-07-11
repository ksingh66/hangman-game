#include "hangman_helpers.h"

#include <stdbool.h>
#include <stdio.h>
#include <string.h>
int main(int argc, char **argv) {
    if (argc < 2) {
        printf("Please input a string after ./hangman \n");
        return 0;
    }
    char *p = argv[1];
    int max_mistakes = 6;
    int length = 0;
    while (*p != '\0'){
        length++;
        p++;
        }
    p -=length;
    if (is_valid_secret(p)==false){
            return 1;
        }

    int mistakes = 0;
    print_hanger(mistakes);
    starting(length, p);
 
    char editable_string[length+1];
    strcpy(editable_string,argv[1]);
 

    for (int i = 0; i < length; i++) {
        if (p[i] == 32 || p[i] == 39 || p[i] == 45) {
            editable_string[i]=p[i];

        } else {
            editable_string[i]='_';
        }}
    
    char eliminated[27];
    eliminated[0]='\0';
    char *editable = editable_string;
    int dash_count=(dash_counter(editable));
    while (1){
        char guess = read_letter();
        if (string_contains_character(p,guess)==true){
                replacer(p,editable,guess);
		dash_count = dash_counter(editable);
		if (dash_count==0){
				print_hanger(mistakes);
				printf("    Phrase: ");
                		print_string(editable);
                		printf("\n");
                		printf("Eliminated: ");
				print_string(eliminated);
				printf("\n");
				printf("\nYou win! The secret phrase was: ");
				print_string(p);
				printf("\n");
				break;

				break;
				}
		
                print_hanger(mistakes);
                printf("    Phrase: ");
                print_string(editable);
                printf("\n");
                printf("Eliminated: ");
		print_string(eliminated);
                printf("\n\n");
		
		}
	else{
		mistakes +=1;

		if (mistakes==max_mistakes){print_hanger(max_mistakes);
			unsigned long len = strlen(eliminated);
                	eliminated[len+1]='\0';
                	eliminated[len]=guess;
			printf("    Phrase: ");
			print_string(editable);
                        printf("\n");
                        printf("Eliminated: ");
                        print_string(eliminated);
                        printf("\n");
			printf("\nYou lose! The secret phrase was: ");
						print_string(p);
						printf("\n");
						break;
						}
		
		unsigned long len = strlen(eliminated);
		eliminated[len+1]='\0';
		eliminated[len]=guess;
		print_hanger(mistakes);
		printf("    Phrase: ");
                print_string(editable);
		printf("\n");
                printf("Eliminated: ");
		print_string(eliminated);
                printf("\n");
		printf("\n");
		}
    
        }
   return 0;}



