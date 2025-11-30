#include <stdio.h>

// Function to subtract two numbers
int subtract(int a, int b) {
    return a - b;
}

// Main function with test cases
int main() {
    int num1 = 10;
    int num2 = 5;
    
    printf("Subtraction Program\n");
    printf("===================\n");
    printf("%d - %d = %d\n", num1, num2, subtract(num1, num2));
    
    // Additional test cases
    printf("7 - 3 = %d\n", subtract(7, 3));
    printf("15 - 8 = %d\n", subtract(15, 8));
    printf("0 - 5 = %d\n", subtract(0, 5));
    
    return 0;
}
