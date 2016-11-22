.PHONY:
	bugdetection_exec

all: bugdetection_exec

bugdetection_exec: main.o
	gcc main.o -o bugdetection_exec

main.o:
	gcc -c main.cpp

clean:
	rm -rf bugdetection_exec *.o

