#makerfile

CC=gcc
CFLAGS=
OBJS=ch3_5.o
LIBS=
app:ch3_5
ch3_5 : $(OBJS)
	$(CC) $(CFLAGS) -o ch3_5 $(OBJS) $(LIBS)

ch3_5.o : ch3_5.c
	$(CC) $(CFLAGS) -c ch3_5.c

clean:
	rm -f $(OBJS) ch3_5 core