#include <stdio.h>
#include <string.h>
#define MAX 100
#define LEN 50
int main() {
    char files[MAX][LEN];int n;
    printf("Enter number of media files: ");
    scanf("%d", &n);
    getchar();
    for (int i = 0; i < n; i++) {
        printf("Enter file %d name: ", i + 1);
        fgets(files[i], LEN, stdin);
        files[i][strcspn(files[i], "\n")] = 0; }
    for (int i = 1; i < n; i++) {
        char key[LEN];
        strcpy(key, files[i]);
        int j = i - 1;
        while (j >= 0 && strcmp(files[j], key) > 0) {
            strcpy(files[j + 1], files[j]);
            j--;}
        strcpy(files[j + 1], key);}
    printf("\nSorted Media Files:\n");
    for (int i = 0; i < n; i++)
        printf("%s\n", files[i]);
    return 0;}
