#include <stdio.h>

#define MAX 50

int main() {
    printf("Santhosh R\n");

    int n, i, j, temp, a[MAX];
    int swapped;

    printf("Enter number of flights: ", MAX);
    scanf("%d", &n);

    if (n > MAX) {
        printf("Limit exceeded!\n");
        return 0;
    }

    // Input arrival times
    for (i = 0; i < n; i++) {
        printf("Enter arrival time for flight %d: ", i + 1);
        scanf("%d", &a[i]);
    }

    // Bubble sort with optimization
    for (i = 0; i < n - 1; i++) {
        swapped = 0;
        for (j = 0; j < n - i - 1; j++) {
            if (a[j] > a[j + 1]) {
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
                swapped = 1;
            }
        }
        if (!swapped) break; // already sorted
    }

    // Output
    printf("\nSorted arrival times:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }

    printf("\n");
    return 0;
}