
/*
 * Matrix-vector product
 */

#include <stdio.h>
#include <stdlib.h>

int main( void ) {
    int n = 4;           
    float **a, *b, *c;

    /*
    Dynamically allocate the matrix a and vectors b and c using size n
    Intialise the matrix a and vector b entries to 1. 
    Write code to compute the product.
    Store your answer in vector c
    Print your final answer
    Free the allocated memory
    */
    /*
    float a[4][4];
    float b[4];
    float c[4];

    for(int i=0; i<4; i++){
      for(int j=0; j<4; j++){
         a[i][j]= 1;
      }
      b[i] = 1;
    }
    */
    a = (float **) calloc(n, sizeof(float *));

    for(int i=0; i<n; i++){
        *(a+i) = (float *) calloc(n, sizeof(float));
    }

    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            *(*(a+i)+j) = 1;
        }
    }

    b = calloc(n, sizeof(float));
    for(int i=0; i<n; i++){
        *(b+i) = 1;
    }

    /*
   for(int i=0; i<4; i++){
      c[i] = 0;
      for(int j=0; j<4; j++){
         c[i] += a[i][j] * b[j];
      }
   }
    */
    c = calloc(n, sizeof(float));
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            *(c+i) += *(*(a+i)+j) * *(b+j);
        }
    }

    /*
   for(int i=0; i<4; i++){
      printf("%.2f ", c[i]);
   }*/
   for(int i=0; i<n; i++){
    printf("%f ", *(c+i));
   }
    
   for (int i = 0; i < n; i++) {
    free(*(a + i)); // Free each row
    }
    free(a);
    free(b);
    free(c);

    return 0;
 }
