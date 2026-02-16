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
    /* ======================================================================== */
    // dynamic array & duality with pointers
    int *p = calloc(5, sizeof(int));

    // does it really initialises to 0 for int?  yes!
    //for(int j=0; j<5; j++){
    //    printf("%d\n", p[j]);
    //}

    // how about malloc? not always, depends on what's on memory
    int *q = malloc(5*sizeof(int));
   // for(int j=0; j<5; j++){
    //    printf("%d\n", q[j]);
   // }

    // how about calloc for char? '\0' (0 in %d) - null character

    char *cptr = calloc(5, sizeof(char));
    //for(int j=0; j<5; j++){
    //    printf("%d \n", cptr[j]);
    //}

    // how about float or double? It sets every bit in the allocated memory to zero, which is 0.0 in modern systems

    /*
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
    
    */

    // 2D array
    int **table1, table2[4][5];

    table1 = calloc(4, sizeof(int *));
    for (int i=0; i<4; i++){
        table1[i] = calloc(5, sizeof(int));
        for(int j=0; j<5; j++){
            table1[i][j] = i*j+10;
            table2[i][j] = i*j+10;
        }
        printf("\n");
    }
    for (int i=0; i<4; i++){
        for(int j=0; j<5; j++){
            printf("%d ", table1[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    for (int i=0; i<4; i++){
        for(int j=0; j<5; j++){
            printf("%d ", table2[i][j]);
        }
        printf("\n");
    }
    return 0;
}