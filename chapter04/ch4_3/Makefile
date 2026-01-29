#makefile

CC=gcc
CFLAGS=
OBJS=ch4_3.o
LIBS=
app:ch4_3

ch4_3 : $(OBJS)
	$(CC) $(CFLAGS) -o ch4_3 $(OBJS) $(LIBS)

ch4_3.o : ch4_3.c
	$(CC) $(CFLAGS) -c ch4_3.c

clean:
	rm -f $(OBJS) ch4_3 core