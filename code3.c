#include<stdio.h>
int main(){
  //Increment & decrement
  
/*int a=10;;
  a++;
  printf("a=%d\n",a);
int b=30;
  b=--b;
  printf("b=%d\n",b);
int c=20;
  --c;
  ++c;
  printf("c=%d\n",c);*/
  
//Type conversion
  int a = 7;
    float b = 9.8;
    printf("Value of a: %.2f\n", (float)a);        //Type conversion from int to float
    printf("Value of a: %f\n", (float)a);
    printf("Value of b: %d\n", (int)b);            //Type conversion from float to int

  /* converting from int to float is called implicit Type conversion
     converting from float to int is called explicit Type conversion
     during explicit type conversion there may cause data lose */
    
return 0;
}
