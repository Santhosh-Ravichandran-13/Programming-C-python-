#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    char words[50][20];
    int count[50] = {0};
    int i = 0, j, n = 0, max = 0, index = 0;

    printf("Enter sentence:\n");
    fgets(str, sizeof(str), stdin);

    // Remove newline
    str[strcspn(str, "\n")] = '\0';

    // Split into words
    char *token = strtok(str, " ");
    while (token != NULL) {
        strcpy(words[n++], token);
        token = strtok(NULL, " ");
    }

    // Count frequency
    for (i = 0; i < n; i++) {
        count[i] = 1;
        for (j = i + 1; j < n; j++) {
            if (strcmp(words[i], words[j]) == 0) {
                count[i]++;
            }
        }
    }

    // Find max frequency
    for (i = 0; i < n; i++) {
        if (count[i] > max) {
            max = count[i];
            index = i;
        }
    }

    printf("Most frequent word: %s\n", words[index]);
    printf("Frequency: %d\n", max);

    return 0;
}