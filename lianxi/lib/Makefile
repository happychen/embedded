all:a.o b.o c.o
	gcc a.o b.o c.o -shared -o libstack.so
a.o:a.c
		gcc a.c -fPIC -c
b.o:b.c
		gcc b.c -fPIC -c
c.o:c.c
		gcc c.c -fPIC -c
.PHONY:clean
clean:
		rm -rf *.o
		rm -rf *.so
