#makefile

CC = gcc
CFLAGS=
OBJS=ch2_5.o 
LIBS=

app:ch2_5

ch2_5 : $(OBJS)
	$(CC) $(CFLAGS) -o ch2_5 $(OBJS) $(LIBS)

ch2_5.o : ch2_5.c 
	$(CC) $(CFLAGS) -c ch2_5.c 

clean:
	rm -f $(OBJS) ch2_5 core