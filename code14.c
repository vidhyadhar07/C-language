#include<stdio.h>
int sum(int a, int b){              //function
    return a + b;
}
int sub(int *a, int *b){
    return (*a) - (*b);
}   
int name_of_function(int n){
    if(n == 1){
        return 1;
    }
    return n + name_of_function(n - 1);
}

int main(){
    printf("Sum of Natural Numbers: %d\n",name_of_function(5));

    int x = 10, y = 20;
    int ans = sum(x, y);                //call by value
    int subAns = sub(&x, &y);           //call by reference
    printf("Sum: %d\n", ans);
    printf("Subtraction: %d\n", subAns);
    return 0;
}

