#makefile

CC=gcc
CFLAGS=
OBJS=ch1_7.o
LIBS=
all:ch1_7

ch1_7 : $(OBJS)
	$(CC) $(CFLAGS) -o ch1_7 $(OBJS) $(LIBS)

ch1_7.o : ch1_7.c
	$(CC) $(CFLAGS) -c ch1_7.c

clean:
	rm -f $(OBJS) ch1_7 core