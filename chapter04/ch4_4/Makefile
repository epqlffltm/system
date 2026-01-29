#makefile

CC=gcc
CFLAGS=
OBJS=ch4_4.o
LIBS=
app:ch4_4

ch4_4 : $(OBJS)
	$(CC) $(CFLAGS) -o ch4_4 $(OBJS) $(LIBS)

ch4_4.o : ch4_4.c
	$(CC) $(CFLAGS) -c ch4_4.c

clean:
	rm -f $(OBJS) ch4_4 core