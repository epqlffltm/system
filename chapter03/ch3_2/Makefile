#makefile

CC=gcc
CFLAGS=
OBJS=ch3_2.o
LIBS=
APP:ch3_2

ch3_2 : $(OBJS)
	$(CC) $(CFLAGS) -o ch3_2 $(OBJS) $(LIBS)

ch3_2.o : ch3_2.c
	$(CC) $(CFLAGS) -c ch3_2.c

clean:
	rm -f $(OBJS) ch3_2 core