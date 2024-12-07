#include <stdio.h>
int main() {
    int num, evenSum = 0, oddSum = 0;
    printf("Enter a positive number: ");
    scanf("%d", &num);
    if (num <= 0) {
        printf("Please enter a positive integer.\n");
        return 1;  
    }
    for (int i = 1; i <= num; i++) {
        if (i % 2 == 0)
            evenSum += i;  
        else
            oddSum += i;   
  }
    printf("Sum of even numbers: %d\n", evenSum);
    printf("Sum of odd numbers: %d\n", oddSum);
    return 0;
}
