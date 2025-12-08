#makefile

CC=gcc
CFLAGS=
OBJS=ch1_6.o
LIBS=
all:ch1_6

ch1_6 : $(OBJS)
	$(CC) $(CFLAGS) -o ch1_6 $(OBJS) $(LIBS)

ch1_6.o : ch1_6.c
	$(CC) $(CFLAGS) -c ch1_6.c

clean:
	rm -f $(OBJS) ch1_6 core