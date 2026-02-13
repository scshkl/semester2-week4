
/*
 * Dot product of 2 vectors
 */

 #include <stdio.h>
 #include <stdlib.h>

 int main( void ) {
    int n = 5;
    float *a, *b, *d;  // stack-based pointers

    // allocation of heap memory for vectors
    a = calloc( n, sizeof(float) );
    b = calloc( n, sizeof(float) );
    d = calloc( n, sizeof(float) );  //why n?

    /*
    Code to initialise the vectors with numerical data 
    Code to compute the dot product 
    - does this differ from the initial code?
    - note that loop now run k=0;k<n 
    Store your answer in d
    print your final answer
    */
   
    //    Code to initialise the vectors with numerical data 
    for(int i=0; i<n; ++i){
      *(a+i) = 1;
      *(b+i) = 2 + i;
    }

    // Code to compute the dot product
    for(int i=0; i<n; i++){
     // *d += a[i]*b[i];
      *(d) += *(a+i) * *(b+i);
    }

    //printf("%f\n", *d);

   for(int i=0; i<n; ++i){
      printf("%f  ", *(d+i));
    }
    
    // explicit deallocation of heap memory before exit */
    free(a);
    free(b);
    free(d);

    return 0;
 }