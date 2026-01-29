#makefile

CC=gcc
CFLAGS=
OBJS=ch4_5.o
LIB=
app:ch4_5

ch4_5 : $(OBJS)
	$(CC) $(CFLAGS) -o ch4_5 $(OBJS) $(LIBS)

ch4_5.o : ch4_5.c
	$(CC) $(CFLAGS) -c ch4_5.c

clean:
	rm -f $(OBJS) ch4_5 core