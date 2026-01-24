#maikfile

CC=gcc
CFLAGS=
OBJS=ch3_8.o
LIBS=
app:ch3_8

ch3_8 : $(OBJS)
	$(CC) $(CFLAGS) -o ch3_8 $(OBJS) $(LIBS)

ch3_8.o : ch3_8.c
	$(CC) $(CFLAGS) -c ch3_8.c

clean:
	rm -f $(OBJS) ch3_8 core