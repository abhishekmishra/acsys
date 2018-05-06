CC=gcc
CFLAGS=-std=c11
LIBS=-lgmp

all:	acsys

acsys:	acsys.o amt.o acsys_utils.o
	$(CC) $(CFLAGS) -o acsys main.c acsys.o amt.o acsys_utils.o $(LIBS)

acsys.o: amt.o
	$(CC) $(CFLAGS) -c -o acsys.o acsys.c amt.o $(LIBS)

amt.o: acsys_utils.o
	$(CC) $(CFLAGS) -c -o amt.o amt.c acsys_utils.o $(LIBS)

acsys_utils.o:
	$(CC) $(CFLAGS) -c -o acsys_utils.o acsys_utils.c $(LIBS)

clean:
	rm *.o acsys
