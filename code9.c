#include <stdio.h>

int main() {
  /*
    int n, i = 1;
    long long factorial = 1; // long long for data type 

    printf("Enter a number: ");
    scanf("%d", &n);


    if (n < 0) {
        printf("Factorial of a negative number doesn't exist.\n");
    } 
    else {
    
        while (i <= n) {
            factorial *= i;
            i++;
        }

        printf("Factorial of %d = %lld\n", n, factorial);
    }

    */
     int n, i = 2, flag = 0;

    // Taking input
    printf("Enter a number: ");
    scanf("%d", &n);

    // Check for numbers less than 2
    if (n <= 1) {
        printf("%d is NOT a prime number.\n", n);
    }
    else {
        // Using while loop to check divisibility
        while (i <= n / 2) {
            if (n % i == 0) {
                flag = 1;  // Found a divisor
                break;     // Exit loop immediately
            }
            i++;
        }

        // Result
        if (flag == 0)
            printf("%d is a Prime number.\n", n);
        else
            printf("%d is NOT a Prime number.\n", n);
    }

    return 0;
}




