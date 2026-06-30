#include<stdio.h>
#include<string.h>
int main(){
  /*
    char name[]={'v','i','d','h','y','a','\0'}; 
    printf("Name is %s ",name);
  printf("Length of name: %d\n", strlen(name)); */

 /*   char str[100];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin); 
    str[strcspn(str, "\n")] = '\0';
    int length = strlen(str);
    printf("Length of the string is: %d\n", length); */

   /*   char source[100], destination[100];
    printf("Enter a string: ");
    fgets(source, sizeof(source), stdin);
    source[strcspn(source, "\n")] = '\0';
    strcpy(destination, source);
    printf("Copied string: %s\n", destination);*/

  char str1[200], str2[100];
    printf("Enter the first string: ");
    fgets(str1, sizeof(str1), stdin);
    str1[strcspn(str1, "\n")] = '\0'; 
    printf("Enter the second string: ");
    fgets(str2, sizeof(str2), stdin);
    str2[strcspn(str2, "\n")] = '\0'; 

    strcat(str1, str2);
  
    printf("Concatenated string: %s\n", str1);

  
    return 0;
}


//program to find the max ,min,average and sum of array 

#include <stdio.h>

int main() {
    int n, i;
    int max, min;
    int sum = 0;
    float avg;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter %d numbers:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    max = min = arr[0];

    for(i = 0; i < n; i++) {
        if(arr[i] > max)
            max = arr[i];
        if(arr[i] < min)
            min = arr[i];
        sum += arr[i];
    }

    avg = (float)sum / n;

    printf("Maximum = %d\n", max);
    printf("Minimum = %d\n", min);
    printf("Sum = %d\n", sum);
    printf("Average = %.2f\n", avg);

    return 0;
}

