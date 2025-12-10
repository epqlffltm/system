#makefile

CC=gcc
CFLAGS=
OBJS=ch2_7.o 
LIBS=
all:ch2_7

ch2_7 : $(OBJS)
	$(CC) $(CFLAGS) -o ch2_7 $(OBJS) $(LIBS)

ch2_7.o : ch2_7.c 
	$(CC) $(CFLAGS) -c ch2_7.c 

clean:
	rm -f $(OBJS) ch2_7 core