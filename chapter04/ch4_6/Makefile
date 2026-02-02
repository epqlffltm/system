#makefile

CC=gcc
CFLAGS=
OBJS=ch4_6.o
LIBS=
app:ch4_6
ch4_6 : $(OBJS)
	$(CC) $(CFLAGS) -o ch4_6 $(OBJS) $(LIBS)

ch4_6.o : ch4_6.c
	$(CC) $(CFLAGS) -c ch4_6.c

clean:
	rm -f $(OBJS) ch4_6 core