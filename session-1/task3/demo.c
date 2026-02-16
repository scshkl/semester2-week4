 #include <stdio.h>

 int main( void ) {
    char test[10] ={'1', '2', '3', '4', '5', '6', '7', '8', '9', 'a'};
    int *int_ptr;
    char *char_ptr;

    char_ptr = test;

    for(int i=0; i<10; i++){
        printf("char: %c \n", *char_ptr);
        char_ptr++;
    }

    return 0;
 }