#ifndef __HANGMAN_HELPERS_H__
#define __HANGMAN_HELPERS_H__

/*
* YOU MAY ADD FUNCTIONS TO THIS FILE, BUT MAY NOT MODIFY ANYTHING THAT IS
* CURRENTLY HERE.
*/

#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// The longest length that a secret can be.
#define MAX_LENGTH 256

// The player loses as soon as they make their 6th incorrect guess.
#define LOSING_MISTAKE 6

bool string_contains_character(const char *s, char c);

char read_letter(void);

bool is_valid_secret(const char *secret);

bool is_lowercase_letter(char c);

int print_hanger(int mistakes);

void  starting(int length, const char *string);

void replacer(char *real_string, char *editable_string,const char guess);

void print_string(char *string);

int dash_counter(char *string);

static const char *punctuation = " '-";

static const char *arts[] = { "  _____\n"
                              " |     |\n"
                              "       |\n"
                              "       |\n"
                              "       |\\\n"
                              "       | \\\n"
                              "     __|__\\\n",
    "  _____\n"
    " |     |\n"
    "(_)    |\n"
    "       |\n"
    "       |\\\n"
    "       | \\\n"
    "     __|__\\\n",
    "  _____\n"
    " |     |\n"
    "(_)    |\n"
    " |     |\n"
    " |     |\\\n"
    "       | \\\n"
    "     __|__\\\n",
    "  _____\n"
    " |     |\n"
    "(_)    |\n"
    "/|     |\n"
    " |     |\\\n"
    "       | \\\n"
    "     __|__\\\n",
    "  _____\n"
    " |     |\n"
    "(_)    |\n"
    "/|\\    |\n"
    " |     |\\\n"
    "       | \\\n"
    "     __|__\\\n",
    "  _____\n"
    " |     |\n"
    "(_)    |\n"
    "/|\\    |\n"
    " |     |\\\n"
    "/      | \\\n"
    "     __|__\\\n",
    "  _____\n"
    " |     |\n"
    "(_)    |\n"
    "/|\\    |\n"
    " |     |\\\n"
    "/ \\    | \\\n"
    "     __|__\\\n" };

#endif
