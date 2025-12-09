#makefile

CC=gcc
CFLAGS=
OBJS=ch2_3.o
LIBS=
all:ch2_3

ch2_3 : $(OBJS)
	$(CC) $(CFLAGS) -o ch2_3 $(OBJS) $(LIBS)

ch2_3.o : ch2_3.c 
	$(CC) $(CFLAGS) -c ch2_3.c

clean:
	rm -f $(OBJS) ch2_3 core