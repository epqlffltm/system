#makefile

CC=gcc
CFLAGS=
OBJS=ch1_5.o
LIBS=
all:ch1_5

ch1_5 : $(OBJS)
	$(CC) $(CFLAGS) -o ch1_5 $(OBJS) $(LIBS)

ch1_5.o : ch1_5.c
	$(CC) $(CFLAGS) -c ch1_5.c

clean:
	rm -f $(OBJS) ch1_5 core