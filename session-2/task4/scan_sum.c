
#include <stdio.h>

int main( void ) {

    // define suitable data

    // use scanf to read from the terminal
    int a, b;
    char c, d;
    char str[100];

    /*
    // part 1
    scanf("%d %c %d %c", &a, &c, &b, &d);
    // print the output from scanf and the data values
    printf("%d %c %d %c", a, c, b, d);
    
    */
    /* 
    part 2
    */
    fgets(str, sizeof(str), stdin);
    int count = sscanf(str, "%d %c %d %c", &a, &c, &b, &d);
    printf("%d %c %d %c", a, c, b, d);

    return 0;
}