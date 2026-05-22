#include <stdio.h>
#include <string.h>

#define MAX 10

int main() {
    printf("Santhosh R\n");

    char book[MAX][50];
    char search[50];
    int i, n;

    printf("Enter number of books : ", MAX);
    scanf("%d", &n);
    getchar(); // clear newline

    if (n > MAX) {
        printf("Limit exceeded!\n");
        return 0;
    }

    printf("Enter book names:\n");
    for (i = 0; i < n; i++) {
        printf("Book %d: ", i + 1);
        fgets(book[i], sizeof(book[i]), stdin);
        book[i][strcspn(book[i], "\n")] = '\0'; // remove newline
    }

    printf("Enter book to search: ");
    fgets(search, sizeof(search), stdin);
    search[strcspn(search, "\n")] = '\0';

    for (i = 0; i < n; i++) {
        if (strcmp(book[i], search) == 0) {
            printf("Book found at position %d\n", i + 1);
            return 0;
        }
    }

    printf("Book not found\n");
    return 0;
}