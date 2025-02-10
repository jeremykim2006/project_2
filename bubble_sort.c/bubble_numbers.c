#include <stdio.h>

void printValues(int* array) {
    printf("[");
    for (int i = 0; i < 9; i++) {
        printf("%d", array[i]);
        if (i < 8) {
            printf(" ");
        }
    }
    printf("]\n");
}

void swap(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

void sort(int* array) {
    int length = 9;
    for (int i = 0; i < length - 1; i++) {
        for (int j = 0; j < length - i - 1; j++) {
            if (array[j] > array[j + 1]) {
                swap(&array[j], &array[j + 1]);
                printValues(array);
            }
        }
    }
}

int main() {
    int values[] = {7, 3, 9, 4, 6, 1, 2, 8, 5};
    printf("Before: \n");
    printValues(values);

    // Test swap
    int x = 3;
    int y = 5;
    printf("x: %d, y: %d \n", x, y);
    swap(&x, &y);
    printf("x: %d, y: %d \n", x, y);

    sort(values);
    printf("After: \n");
    printValues(values);

    return 0;
}
