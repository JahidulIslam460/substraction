#include <stdio.h>
#include <assert.h>

// Function to subtract two numbers
int subtract(int a, int b) {
    return a - b;
}

// Test function
void test_subtraction() {
    // Test case 1: Positive numbers
    assert(subtract(10, 5) == 5);
    
    // Test case 2: Negative result
    assert(subtract(5, 10) == -5);
    
    // Test case 3: Zero subtraction
    assert(subtract(10, 0) == 10);
    
    // Test case 4: Both negative numbers
    assert(subtract(-5, -3) == -2);
    
    // Test case 5: Equal numbers
    assert(subtract(7, 7) == 0);
    
    printf("All tests passed! ✓\n");
}

int main() {
    test_subtraction();
    return 0;
}
