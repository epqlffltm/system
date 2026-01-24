#makefie

CC=gcc
CFLAGS=
OBJS=ch3_6.o
LIBS=
app:ch3_6

ch3_6 : $(OBJS)
	$(CC) $(CFLAGS) -o ch3_6 $(OBJS) $(LIBS)

ch3_6.o : ch3_6.c
	$(CC) $(CFLAGS) -c ch3_6.c

clean:
	rm -f $(OBJS) ch3_6 core