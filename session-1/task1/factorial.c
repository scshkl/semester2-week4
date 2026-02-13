
/*
 * Factorial
 */

 #include <stdio.h>

 int main( void ) {
    int f[20];

    /*
    Code to compute the factorial of each array index
    Print your final answer
    */
    f[0] = 1;

    for (int i=1; i<20; i++){
      f[i] = 1;
      for(int j=i; j>0; j--){
         f[i] *= j;
      }
      printf("%d\n", f[i]);
    }

    return 0;
 }

 // 12 terms can be stored in int
