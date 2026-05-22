#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct Song {
    char name[50];
    struct Song* next;
};
struct Song* addSong(struct Song* head, char name[]) {
    struct Song* newSong = (struct Song*)malloc(sizeof(struct Song));
    strcpy(newSong->name, name);
    newSong->next = NULL;
    if (head == NULL)
        return newSong;
    struct Song* temp = head;
    while (temp->next != NULL)
        temp = temp->next;
    temp->next = newSong;
    return head;
}
void displayPlaylist(struct Song* head) {
    printf("\nPlaylist:\n");
    int i = 1;
    while (head != NULL) {
        printf("%d. %s\n", i, head->name);
        head = head->next;
        i++;
    }
}
int main() {
    printf("Santhosh R\n");
    struct Song* playlist = NULL;
    int n;
    char name[50];
    printf("How many songs do you want to add? ");
    scanf("%d", &n);
    getchar();
    for (int i = 0; i < n; i++) {
        printf("Enter song %d name: ", i + 1);
        fgets(name, sizeof(name), stdin);
        name[strcspn(name, "\n")] = 0;
        playlist = addSong(playlist, name);
    }
    displayPlaylist(playlist);
    return 0;
}
