all: foo

LIBS:= -lpthread
#CFLAGS:= -Wall

foo: main.o foo.o
	gcc -o foo main.o foo.o $(LIBS) $(CFLAGS)

clean:
	@rm -f foo
	@rm -f *.o
