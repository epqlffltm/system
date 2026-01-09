#makefile

CC-gcc
CFLAGS=
OBJS=ch3_3.O
LIBS=
app:ch3_3

ch3_3 : $(OBJS)
	$(CC) $(CFLAGS) -o ch3_3 $(OBJS) $(LIBS)

ch3_3.o : ch3_3.c
	$(CC) $(CFLAGS) -c ch3_3.c

clean:
	rm -f $(OBJS) ch3_3 core