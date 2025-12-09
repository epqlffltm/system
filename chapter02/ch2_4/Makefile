#makefile

CC=gcc
CFLAGS=
OBJS=ch2_4.o 
LIBS=
all:ch2_4

ch2_4 : $(OBJS)
	$(CC) $(CFLAGS) -o ch2_4 $(OBJS) $(LIBS)

ch2_4.o : ch2_4.c 
	$(CC) $(CFLAGS) -c ch2_4.c 

clean:
	rm -f $(OBJS) ch2_4 core