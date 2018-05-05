all:	acsys

acsys:	acsys.o amt.o
	gcc -o acsys main.c acsys.o

acsys.o: amt.o
	gcc -c acsys.h acsys.c amt.o

amt.o:
	gcc -c amt.c amt.o

clean:
	rm *.o acsys
