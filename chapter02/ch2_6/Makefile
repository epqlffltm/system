#makefile

CC=gcc
CFLAGS=
OBJS=ch2_6.o 
LIBS=
all:ch2_6

ch2_6 : $(OBJS)
	$(CC) $(CFLAGS) -o ch2_6 $(OBJS) $(LIBS)

ch2_6.o : ch2_6.c 
	$(CC) $(CFLAGS) -c ch2_6.c 

clean:
	rm -f $(OBJS) ch2_6 core