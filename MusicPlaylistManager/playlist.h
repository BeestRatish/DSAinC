#ifndef PLAYLIST_H
#define PLAYLIST_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Song {
    char title[100];
    char artist[100];
    struct Song* next;
} Song;

typedef struct Playlist {
    char name[100];
    Song* head;
    struct Playlist* next;
} Playlist;

typedef struct Folder {
    char name[100];
    Playlist* head;
    struct Folder* next;
} Folder;

void addSong(Playlist* playlist, const char* title, const char* artist);
void addPlaylist(Folder* folder, const char* name);
void addFolder(Folder** head, const char* name);
void printSongs(Playlist* playlist);
void printPlaylists(Folder* folder);
void printFolders(Folder* head);

#endif
