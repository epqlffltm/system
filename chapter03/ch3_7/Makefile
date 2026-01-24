#makefile

CC=gcc
CFLAGS=
OBJS=ch3_7.o
LIBS=
app:ch3_7

ch3_7 : $(OBJS)
	$(CC) $(CFLAGS) -o ch3_7 $(OBJS) $(LIBS)

ch3_7.o : ch3_7.c
	$(CC) $(CFLAGS) -c ch3_7.c

clean:
	rm -f $(OBJS) ch3_7 core