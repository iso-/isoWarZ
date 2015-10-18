# Basic Makefile
 
CPPFLAGS=
CC=gcc
CFLAGS= -Wall -Wextra -std=c99 -O2 -lSDLmain -lSDL -lSDL_image `pkg-config --cflags --libs gtk+-2.0` 
LDFLAGS=
LDLIBS=
 

all:
	
haar:haar.o pretraitement2.o
	gcc -o haar haar.o pretraitement2.o -Wall -Wextra -std=c99 -O2 -lSDLmain -lSDL -lSDL_image -lm `pkg-config --cflags --libs gtk+-2.0`
 
clean:
	rm -f *~ *.o
 
# END
