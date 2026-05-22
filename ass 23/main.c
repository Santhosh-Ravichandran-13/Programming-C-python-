#include <stdio.h>
#include <string.h>

#define MAX 20

int main() {
    int n, i, j, min;
    char name[MAX][50], temp[50];

    printf("Enter number of names : ", MAX);
    scanf("%d", &n);

    if (n > MAX) {
        printf("Limit exceeded!\n");
        return 0;
    }

    // Input names
    for (i = 0; i < n; i++) {
        printf("Enter name %d: ", i + 1);
        scanf("%s", name[i]);   // use fgets if you want spaces
    }

    // Selection sort
    for (i = 0; i < n - 1; i++) {
        min = i;
        for (j = i + 1; j < n; j++) {
            if (strcmp(name[j], name[min]) < 0) {
                min = j;
            }
        }

        // Swap
        if (min != i) {
            strcpy(temp, name[i]);
            strcpy(name[i], name[min]);
            strcpy(name[min], temp);
        }
    }

    // Output
    printf("\nSorted names:\n");
    for (i = 0; i < n; i++) {
        printf("%s\n", name[i]);
    }

    return 0;
}