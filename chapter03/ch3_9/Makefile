#makefile

CC=gcc
CFLAGS=
OBJS=ch3_9.o
LIBS=
app:ch3_9

ch3_9 : $(OBJS)
	$(CC) $(CFLAGS) -o ch3_9 $(OBJS) $(LIBS)

ch3_9.o : ch3_9.c
	$(CC) $(CFLAGS) -c ch3_9.c

clean:
	rm -f $(OBJS) ch3_9 core