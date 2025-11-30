#include <stdio.h>
#include <assert.h>
#include "subtraction.h"

// Test function
void test_subtraction() {
    printf("Running subtraction tests...\n");
    
    // Test case 1: Positive numbers
    assert(subtract(10, 5) == 5);
    printf("✓ 10 - 5 = 5\n");
    
    // Test case 2: Negative result
    assert(subtract(5, 10) == -5);
    printf("✓ 5 - 10 = -5\n");
    
    // Test case 3: Zero subtraction
    assert(subtract(10, 0) == 10);
    printf("✓ 10 - 0 = 10\n");
    
    // Test case 4: Both negative numbers
    assert(subtract(-5, -3) == -2);
    printf("✓ -5 - (-3) = -2\n");
    
    // Test case 5: Equal numbers
    assert(subtract(7, 7) == 0);
    printf("✓ 7 - 7 = 0\n");
    
    // Test case 6: Negative from positive
    assert(subtract(5, -3) == 8);
    printf("✓ 5 - (-3) = 8\n");
    
    printf("All tests passed! ✅\n");
}

int main() {
    test_subtraction();
    return 0;
}
