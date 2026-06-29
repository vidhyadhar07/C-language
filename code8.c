#include <stdio.h>

int main() {
    int i = 1;  // initialization
    /*
    while(i <= 10) {                  // while loop
        printf("%d\n", i);
        i++;  // increment
    }
    */
   
   /* for(i = 1; i <= 10; i++) {      // for loop
        printf("%d\n", i);
    }*/

    do {
        printf("%d\n", i);
        i++;  // increment
    } while(i <= 10);                 // do-while loop

  // while,for loop are considered as entry controlled loop
  //do-while loop is considered as exit cotrolled loop

    return 0;
}
