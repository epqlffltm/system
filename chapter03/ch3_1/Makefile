#makefile

CC=gcc
CFLAGS=
OBJS=ch3_1.o
LIBS=
app:ch3_1

ch3_1 : $(OBJS)
	$(CC) $(CFLAGS) -o ch3_1 $(OBJS) $(LIBS)

ch3_1.o : ch3_1.c 
	$(CC) $(CFLAGS) -c ch3_1.c

clean:
	rm -f $(OBJS) ch3_1 core