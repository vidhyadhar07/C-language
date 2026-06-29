#include <stdio.h>

int main() {
   
    /*
     int i = 1;
    while(i <= 10) {                  // while loop
        printf("%d\n", i);
        i++;  // increment
    }
    */
   
   /* 
    int i = 1;
    for(i = 1; i <= 10; i++) {      // for loop
        printf("%d\n", i);
    }*/
    /*
     int i = 1;
    do {
        printf("%d\n", i);
        i++;  // increment
    } while(i <= 10);    */             // do-while loop

  // while,for loop are considered as entry controlled loop
  //do-while loop is considered as exit cotrolled loop
     for(int i = 1; i <= 10; i++){
        if(i % 2 == 0){
            continue;                  // Skip even numbers
        }
        printf("%d\n", i);
        if( i == 7){
            break;                     // Exit loop when i is 7
        }
    }

    return 0;
}
