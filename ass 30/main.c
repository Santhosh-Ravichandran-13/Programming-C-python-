#include <stdio.h>

#define MAX 50

int main() {
    printf("Santhosh R\n");

    int n, i, a[MAX], key, low = 0, high, mid;

    printf("Enter number of elements : ", MAX);
    scanf("%d", &n);

    if (n > MAX) {
        printf("Limit exceeded!\n");
        return 0;
    }

    printf("Enter sorted elements:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    printf("Enter search value: ");
    scanf("%d", &key);

    high = n - 1;

    while (low <= high) {
        mid = (low + high) / 2;

        if (a[mid] == key) {
            printf("Element found at position %d\n", mid + 1);
            return 0;
        } 
        else if (a[mid] < key) {
            low = mid + 1;
        } 
        else {
            high = mid - 1;
        }
    }

    printf("Element not found\n");
    return 0;
}