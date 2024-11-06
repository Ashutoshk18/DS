//Merging two arrays
#include <stdio.h>
#include <stdlib.h>

void merge(int a[], int size_a, int b[], int size_b) {
    int size_c = size_a + size_b;
    int *c = (int*)malloc(size_c * sizeof(int));

    int i = 0, j = 0, k = 0;

    // Merging in sorted order
    while (i < size_a && j < size_b) {
        if (a[i] < b[j]) {
            c[k++] = a[i++];
        } else {
            c[k++] = b[j++];
        }
    }

    // Copy any remaining elements from array a
    while (i < size_a) {
        c[k++] = a[i++];
    }

    // Copy any remaining elements from array b
    while (j < size_b) {
        c[k++] = b[j++];
    }

    // Print merged array
    for (int i = 0; i < size_c; i++) {
        printf("%d ", c[i]);
    }
    printf("\n");
    free(c);
}

int main() {
    int a[] = {1, 2, 3, 4, 5, 6};
    int b[] = {2, 34, 37, 57, 232};
    int size_a = sizeof(a) / sizeof(a[0]);
    int size_b = sizeof(b) / sizeof(b[0]);

    merge(a, size_a, b, size_b);

    return 0;
}
