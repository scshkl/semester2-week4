/*
 * Use the series approxiation to Pi 
 *  pi_n = 4 x ( 1 - 1/3 + 1/5 - 1/7 + 1/9 - ... )
 * to approximate Pi
 * and examine how accurate it is as 
 * you increase the number of terms, n.
 * Enter the number of terms, n,  as a command line argument.
 * ie. measure error = abs( Pi-pi_n )
 * Hint: math library function fabs(x) gives you the absolute value as a double. 
 * Print out the number of terms, the computed value pi_n and the error
 */

#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main( int argc, char **argv ) {
    double Pi = 3.1415926535897932;
    double pi_n = 1.0;

    /*
    Your code
    */
    if (argc > 1 && atoi(argv[1]) <= 0)
        return 1;

    int n = atoi(argv[1]);

    for(int i=2; i<=n; i++){
        if (i % 2 == 0){
            pi_n -= (1.0/(i+1));
            printf("%d: %lf\n", i, pi_n);
        }
        else
        {
            pi_n += (1.0/(i+1));
            printf("%d: %lf\n", i, pi_n);
        }
    }

    pi_n = 4 * pi_n;
    printf("pi_n: %lf, abs(Pi-pi_n):%lf\n", pi_n, fabs(Pi-pi_n));


    return 0;
}
 