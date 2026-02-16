#include <stdio.h>

int main(void){
    int vec[] = {1, 3, 5, 7, 9};
    int *ptr;
    ptr = &vec[0];
    
   //printf("%d\n", vec[5]);  //vec[5], index 5 out of bound
    for(int i=0; i<5; i++){
        printf("%d\n", *(ptr));
        ptr++;
    }
    return 0;
}