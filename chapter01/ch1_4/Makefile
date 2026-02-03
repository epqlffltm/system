#makefile

CC=gcc
CFLAGS=
OBJS=ch1_4.o
LIBS=
all:ch1_4

ch1_4 : $(OBJS)
	$(CC) $(CFLAGS) -o ch1_4 $(OBJS) $(LIBS)

ch1_4.o : ch1_4.c
	$(CC) $(CFLAGS) -c ch1_4.c

clean:
	rm -f $(OBJS) ch1_4 core