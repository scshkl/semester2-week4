 #include <stdio.h>

 int main( void ) {
    char test[10] ={'1', '2', '3', '4', '5', '6', '7', '8', '9', 'a'};
    int num[3]={12, 13, 1234};

    int *int_ptr;
    char *char_ptr;

    int_ptr = num;

    for(int i=0; i<3; i++){
        printf("d: %d \n", *int_ptr);
        int_ptr++;
    }

    return 0;
 }