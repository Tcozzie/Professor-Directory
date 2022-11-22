# target : dependencies
#   ... what to do if dependencies have changed



#puts everything together
pgm1 : mainf.o pfunctions.o # compiles all file into one executable file
	gcc -o pgm1 -Wall mainf.o pfunctions.o

pfunctions.o : pfunctions.c #compiles the funtion file
	gcc -c pfunctions.c -Wall

mainf.o : mainf.c #compiles the main file
	gcc -c mainf.c -Wall
