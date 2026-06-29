//program to print prttern
//  *******
//   *****
//    ***
//     *

#include <stdio.h>
  
int main(){
int i,j;
for(int i=1;i<=4;i++){
  for(int j=1;j<=7;j++){
    if(j>=i&&j<=8-i){
      printf("*");
    }else{
      printf(" ");
    }
  }
  printf("\n");
}
  return 0;
}

//program to print prttern
//  *****
//  ****
//  ***
//  **
//  *

#include <stdio.h>
  
int i,j;
for(int i=1;i<=5;i++){
  for(int j=1;j<=5;j++){
    if(j>=1&&j<=6-i){
      printf("*");
    }else{
      printf(" ");
    }
  }
  printf("\n");
}
  return 0;
}

//program to print prttern
//  1
//  23
//  456
//  78910

#include <stdio.h>

int main() {
    int i, j, num = 1;  

    for (i = 1; i <= 4; i++) {
        for (j = 1; j <= i; j++) {
            printf("%d ", num);
            num++;  
        }
        printf("\n");  
    }

    return 0;
}




