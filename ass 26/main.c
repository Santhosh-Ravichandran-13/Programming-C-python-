#include <stdio.h>

#define MAX 50

void merge(int a[], int l, int m, int r) {
    int i = l, j = m + 1, k = l;
    int temp[MAX];

    while (i <= m && j <= r) {
        if (a[i] < a[j])
            temp[k++] = a[i++];
        else
            temp[k++] = a[j++];
    }

    while (i <= m)
        temp[k++] = a[i++];

    while (j <= r)
        temp[k++] = a[j++];

    for (i = l; i <= r; i++)
        a[i] = temp[i];
}

void mergesort(int a[], int l, int r) {
    if (l < r) {
        int m = (l + r) / 2;
        mergesort(a, l, m);
        mergesort(a, m + 1, r);
        merge(a, l, m, r);
    }
}

int main() {
    printf("Santhosh R\n");

    int n, i, a[MAX];

    printf("Enter number of products: ", MAX);
    scanf("%d", &n);

    if (n > MAX) {
        printf("Limit exceeded!\n");
        return 0;
    }

    // Input prices
    for (i = 0; i < n; i++) {
        printf("Enter price: ");
        scanf("%d", &a[i]);
    }

    // Sort
    mergesort(a, 0, n - 1);

    // Output
    printf("\nSorted prices:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }

    printf("\n");
    return 0;
}