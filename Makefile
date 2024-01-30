.PHONY: all clean 
	
all: task

main.o: main.c list.h editFile.h queue_processing.h stack_processing.h
			gcc -c main.c

editFile.o: editFile.c editFile.h list.h
			gcc -c editFile.c

queue_processing.o: queue_processing.c list.h queue_processing.h
			gcc -c queue_processing.c

stack_processing.o: stack_processing.c list.h stack_processing.h
			gcc -c stack_processing.c
			
task: main.o queue_processing.o editFile.o stack_processing.o
			gcc -o task main.o queue_processing.o editFile.o stack_processing.o

clean:
		del *.o
		del task.exe