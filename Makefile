.PHONY: all clean 
	
all: task

main.o: main.c list.h in_out.h list_processing.h
			gcc -c main.c

in_out.o: in_out.c in_out.h list.h
			gcc -c in_out.c

list_processing.o: list_processing.c list.h list_processing.h
			gcc -c list_processing.c

task: main.o list_processing.o in_out.o
			gcc -o task main.o list_processing.o in_out.o

clean:
		del *.o
		del task.exe