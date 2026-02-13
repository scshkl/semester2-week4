
/*
 * Matrix-vector product
 */

 #include <stdio.h>

 int main( void ) {
    float a[4][4];
    float b[4];
    float c[4];

    /*
    Intialise the matrix a and vector b entries to 1. 
    Write code to compute the product.
    Store your answer in vector c
    Print your final answer
    */

    for(int i=0; i<4; i++){
      for(int j=0; j<4; j++){
         a[i][j]= 1;
      }
      b[i] = 1;
    }

   for(int i=0; i<4; i++){
      c[i] = 0;
      for(int j=0; j<4; j++){
         c[i] += a[i][j] * b[j];
      }
   }

   for(int i=0; i<4; i++){
      printf("%.2f ", c[i]);
   }
    return 0;
 }
