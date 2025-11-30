#include <stdio.h>
#include <assert.h>
#include "subtraction.h"

void test_subtraction() {
    assert(subtract(10, 5) == 5);
    assert(subtract(5, 10) == -5);
    assert(subtract(10, 0) == 10);
    assert(subtract(7, 7) == 0);
    printf("All tests passed!\n");
}

int main() {
    test_subtraction();
    return 0;
}
