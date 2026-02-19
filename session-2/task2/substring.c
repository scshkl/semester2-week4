/*
 * Find a substring within a given string
 */

 // create a program to locate a substring "ump" within a given string "The quick brown fox jumped over the lazy dog"

 /*  Hints:
 1. include the appropriate libraries
 2. create the main function
 3. define the program data as strings
 4. using the string library documentation find the appropriate string function
 5. implement the solution and compute the answer  
 6. print the answer appropriately as pointer, character and string
 */ 

#include <stdio.h>
#include <string.h>

int main( void ) {
    char main[] = "The quick brown fox jumped over the lazy dog";
    char subs[] = "ump";
    char *ptr;

    ptr = strstr(main, subs);

    if (ptr){
        printf("'%s' is found in '%s' at position %ld\n", subs, main, ptr-main);
        // prt-main is returning  8 bytes for 64-bit architecture and thus %ld will work but not %d
        // actually pointer arithmetics returneing ptfdiff_t (signed integer) which is 8 bytes
        // you can print it with %td with t stands for ptrdiff_t.
    }
    else{
        printf("'%s' is not found in '%s'\n", subs, main);
    }



    return 0;
}