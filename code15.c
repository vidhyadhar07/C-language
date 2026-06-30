#include<stdio.h>
#include<stdlib.h>
int main(){
    /* int age = 19;
     int *ptr = &age;
     printf("Value of age: %d\n", age);  
     printf("Address of age: %p\n", (void*)&age);
     printf("Value of ptr: %p\n", (void*)ptr);
     printf("Value pointed by ptr: %d\n", *ptr);  */

     /*int arr[] = {4, 21, 69, 38, 78};
     int *ptr = arr;
     printf("%d\n",*ptr);
     printf("%d\n",*(ptr+2)); */

  
  /* r --> reading 
     w --> writing
     a --> append
  */

    FILE *fp;
    fp = fopen("userfile.txt", "w");        
    fprintf(fp,"i am an software engineer\n");
    fclose(fp);
    return 0;
}
