CC=clang
CFLAGS= -Wall -Wextra -g -o2 -lm -lSDL -lSDLmain -lSDL_image `pkg-config --cflags --libs gtk+-2.0`
LDLIBS=`pkg-config --libs sdl`

all:
	$(CC) $(CFLAGS)  pretraitement2.c haar.c data.c eigenface.c  funcInter.c -o RTFPicture
clean:
	rm -f *~ *.o
