#makefile

CC=gcc
CFLAGS=
OBJS=ch4_7.o
LIBS=
app:ch4_7
ch4_7 : $(OBJS)
	$(CC) $(CFLAGS) -o ch4_7 $(OBJS) $(LIBS)

ch4_7.o : ch4_7.c
	$(CC) $(CFLAGS) -c ch4_7.c

clean:
	rm -f $(OBJS) ch4_7 core