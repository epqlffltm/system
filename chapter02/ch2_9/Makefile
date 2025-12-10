#makefile

CC=gcc
CFLAGS=
OBJS=ch2_9.o 
LIBS=
app:ch2_9

ch2_9 : $(OBJS)
	$(CC) $(CFLAGS) -o ch2_9 $(OBJS) $(LIBS)

ch2_9.o : ch2_9.c 
	$(CC) $(CFLAGS) -c ch2_9.c

clean:
	rm -f $(OBJS) ch2_9 core