#makefile

CC=gcc
CFLAGS=
OBJS=ch4_1.o
LIBS=
app:ch4_1

ch4_1 : $(OBJS)
	$(CC) $(CFLAGS) -o ch4_1 $(OBJS) $(LIBS)

ch4_1.o : ch4_1.c
	$(CC) $(CFLAGS) -c ch4_1.c

clean:
	rm -f $(OBJS) ch4_1 core