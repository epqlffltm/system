#makefile

CC=gcc
CFLAGS=
OBJS=ch2_8.o 
LIBS=
app:ch2_8

ch2_8 : $(OBJS)
	$(CC) $(CFLAGS) -o ch2_8 $(OBJS) $(LIBS)

ch2_8.o : ch2_8.c 
	$(CC) $(CFLAGS) -c ch2_8.c 

clean :
	rm -f $(OBJS) ch2_8 core