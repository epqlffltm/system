#makefile

CC=gcc
CFLAGS=
OBJS=ch4_2.o
LIBS=
app:ch4_2

ch4_2 : $(OBJS)
	$(CC) $(CFLAGS) -o ch4_2 $(OBJS) $(LIBS)

ch4_2.o : ch4_2.c
	$(CC) $(CFLAGS) -c ch4_2.c

clean:
	rm -f $(OBJS) ch4_2 core