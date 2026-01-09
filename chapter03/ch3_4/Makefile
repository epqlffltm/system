#makefile

CC=gcc
CFLAGS=
OBJS=ch3_4.o
LIBS=
app:ch3_4
ch3_4 : $(OBJS)
	$(CC) $(CFLAGS) -o ch3_4 $(OBJS) $(LIBS)

ch3_4.o : ch3_4.c
	$(CC) $(CFLAGS) -c ch3_4.c
	
clean:
	rm -f $(OBJS) ch3_4 core