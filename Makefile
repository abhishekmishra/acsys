$(CC): gcc

$(CFLAGS): -std=c11

all:	acsys

acsys:	acsys.o amt.o
	$(CC) $(CFLAGS) -o acsys main.c acsys.o

acsys.o: amt.o
	$(CC) $(CFLAGS) -c -o acsys.o acsys.c amt.o

amt.o: acsys_utils.o
	$(CC) $(CFLAGS) -c -o amt.o amt.c acsys_utils.o

acsys_utils.o:
	$(CC) $(CFLAGS) -c -o acsys_utils.o acsys_utils.c

clean:
	rm *.o acsys
