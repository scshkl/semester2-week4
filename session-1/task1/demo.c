#include <stdio.h>
#include <stdlib.h>

int main(void){

    // static array
    /*
    int vec[] = {1, 3, 5, 7, 9};
    int *ptr;
    ptr = &vec[0];
    for(int i=0; i<5; i++){
        printf("%d\n", *(ptr));
        ptr++;
    }
    */

    // dynamic array
    int *p = calloc(8, sizeof(int));
    p[0] = 1;
    for(int j=1; j<5; j++){
       // p[j] = p[j-1]+2;
        // if do not want to access through  index like array
        *(p+j) = *(p+j-1) + 2;
    }

    for(int i=0; i<5; i++){
        //printf("%d\n", p[i]);
        // if do not want access through index like array
        printf("%d\n", *(p+i));
    }


    
   //printf("%d\n", vec[5]);  //vec[5], index 5 out of bound

    return 0;
}