#include <stdio.h>

int main() {
  /*  int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    if (num >= 0) {
        printf("%d is a Positive number.\n", num);
    }
    if(num < 0) {
        printf("%d is a Negative number.\n", num);
    }*/
  int a, b, c;
    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);

    if (a > b && a > c) {
        printf("%d is the largest number.\n", a);
    }
    else if (b > a && b > c) {
        printf("%d is the largest number.\n", b);
    }
    else {
        printf("%d is the largest number.\n", c);
    }
    return 0;
}
