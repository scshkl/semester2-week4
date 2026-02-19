
/* 
 * Write a program that reads in a line of text from the command line
 * 1. concatenates all the command line arguments into one string
 * 2. searches for the first occurrence of a given character
 * eg. use "The quick brown fox" on the command line and locate 'k'
 * Hint: argv is an array so you can use a simple for-loop
 * Hint: string library functions strcat() and strcspn() can be used
 */
#include <stdio.h>
#include <string.h>

int main( int argc, char **argv ) {

    char sentence[200]="";
    char *ptr;

    /*
    Your code
    */
    for( int k=1; k<argc; ++k ) {
        strcat(sentence, argv[k]);
    }
    
    sentence[strcspn(sentence, "\n")] = '\0';
    ptr = strstr(sentence, "k");
    
    if (ptr)
        printf("%c is found in %s at position %td\n", 'k', sentence, ptr-sentence);
    else
        printf("not found\n");


    return 0;
}