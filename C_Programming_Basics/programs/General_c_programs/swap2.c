#include <stdio.h>

struct MultipleValues {
    int result1;
    int result2;
};

struct MultipleValues multipleValues() {
    struct MultipleValues result;
    result.result1 = 10;
    result.result2 = 20;
    return result;
}

int main() {
    struct MultipleValues values = multipleValues();

    printf("Result 1: %d\n", values.result1);
    printf("Result 2: %d\n", values.result2);

    return 0;
}

