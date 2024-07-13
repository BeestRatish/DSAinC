#include "playlist.h"

void addSong(Playlist* playlist, const char* title, const char* artist) {
    Song* newSong = (Song*)malloc(sizeof(Song));
    strcpy(newSong->title, title);
    strcpy(newSong->artist, artist);
    newSong->next = playlist->head;
    playlist->head = newSong;
}

void addPlaylist(Folder* folder, const char* name) {
    Playlist* newPlaylist = (Playlist*)malloc(sizeof(Playlist));
    strcpy(newPlaylist->name, name);
    newPlaylist->head = NULL;
    newPlaylist->next = folder->head;
    folder->head = newPlaylist;
}

void addFolder(Folder** head, const char* name) {
    Folder* newFolder = (Folder*)malloc(sizeof(Folder));
    strcpy(newFolder->name, name);
    newFolder->head = NULL;
    newFolder->next = *head;
    *head = newFolder;
}

void printSongs(Playlist* playlist) {
    Song* current = playlist->head;
    while (current != NULL) {
        printf("Title: %s, Artist: %s\n", current->title, current->artist);
        current = current->next;
    }
}

void printPlaylists(Folder* folder) {
    Playlist* current = folder->head;
    while (current != NULL) {
        printf("Playlist: %s\n", current->name);
        printSongs(current);
        current = current->next;
    }
}

void printFolders(Folder* head) {
    Folder* current = head;
    while (current != NULL) {
        printf("Folder: %s\n", current->name);
        printPlaylists(current);
        current = current->next;
    }
}
