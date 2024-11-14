#include <stdio.h>

int main(void) {
    int result = 5 + 3 * 4; // Result is 17 because * has higher precedence than +
    int result2 = (5 + 3) * 4; // Result is 32 due to parentheses

    printf("Result without parentheses: %d\n", result);
    printf("Result with parentheses: %d\n", result2);

    return 0;
}
