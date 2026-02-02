#makefile

CC=gcc
CFLAGS=
OBJS=ch4_9.o
LIBS=
app:ch4_9

ch4_9 : $(OBJS)
	$(CC) $(CFLAGS) -o ch4_9 $(OBJS) $(LIBS)

ch4_9.o : ch4_9.c
	$(CC) $(CFLAGS) -c ch4_9.c

clean:
	rm -f $(OBJS) ch4_9 core