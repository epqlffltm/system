#makefile

CC=gcc
CFLAGS=
OBJS=ch4_10.o
LIBS=
app:ch4_10

ch4_10 : $(OBJS)
	$(CC) $(CFLAGS) -o ch4_10 $(OBJS) $(LIBS)

ch4_10.o : ch4_10.c
	$(CC) $(CFLAGS) -c ch4_10.c

clean:
	rm -f $(OBJS) ch4_10 core