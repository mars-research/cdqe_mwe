all: foo

CC:=gcc
#CFLAGS=-m32
LIBS:= -lpthread
CFLAGS:= -Wall

foo: main.o foo.o
	$(CC) -o foo main.o foo.o $(LIBS) $(CFLAGS)

clean:
	@rm -f foo
	@rm -f *.o
