CC=gcc
CFLAGS=
LIBS=
all: ch2_1 ch2_2

ch2_1: ch2_1.o
	$(CC) $(CFLAGS) -o ch2_1 ch2_1.o $(LIBS)

ch2_1.o: ch2_1.c
	$(CC) $(CFLAGS) -c ch2_1.c 

ch2_2: ch2_2.o
	$(CC) $(CFLAGS) -o ch2_2 ch2_2.o $(LIBS)

ch2_2.o: ch2_2.c
	$(CC) $(CFLAGS) -c ch2_2.c 

clean:
	rm -f ch2_1 ch2_2 *.o core
