#makefile

CC=gcc
CFLAGS=
OBJS=ch4_8.o
LIBS=
app:ch4_8

ch4_8 : $(OBJS)
	$(CC) $(CFLAGS) -o ch4_8 $(OBJS) $(LIBS)

ch4_8.o : ch4_8.c
	$(CC) $(CFLAGS) -c ch4_8.c

clean:
	rm -f $(OBJS) ch4_8 core