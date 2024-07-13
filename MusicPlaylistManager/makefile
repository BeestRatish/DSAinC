CC = gcc
CFLAGS = `pkg-config --cflags gtk4`
LIBS = `pkg-config --libs gtk4`
TARGET = playlist_manager

all: $(TARGET)

$(TARGET): main.o playlist.o
    $(CC) -o $(TARGET) main.o playlist.o $(LIBS) -L/opt/homebrew/lib

main.o: main.c
    $(CC) -c main.c $(CFLAGS) -I/opt/homebrew/Cellar/gtk4/4.14.4/include -I/opt/homebrew/opt/glib/include

playlist.o: playlist.c playlist.h
    $(CC) -c playlist.c $(CFLAGS) -I/opt/homebrew/Cellar/gtk4/4.14.4/include -I/opt/homebrew/opt/glib/include

clean:
    rm -f *.o $(TARGET)
