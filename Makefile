.PHONY: all clean 
	
all: task

main.o: main.c list.h editFile.h list_processing.h
			gcc -c main.c

editFile.o: editFile.c editFile.h list.h
			gcc -c editFile.c

list_processing.o: list_processing.c list.h list_processing.h
			gcc -c list_processing.c

task: main.o list_processing.o editFile.o
			gcc -o task main.o list_processing.o editFile.o

clean:
		del *.o
		del task.exe