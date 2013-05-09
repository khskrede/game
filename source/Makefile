
CC = g++
FLAGS = -std=c++0x -W -Wall 
LIBS = -lglut -lGL -lGLU -lGLEW
INCLUDE_DIRS = -I./



all: main

main: gamewindow.o
	$(CC) $(FLAGS) $(LIBS) main.cpp -o main gamewindow.o $(INCLUDE_DIRS) 

gamewindow.o:
	$(CC) $(FLAGS) $(LIBS) -c ./view/gamewindow.cpp $(INCLUDE_DIRS) 

clean:
	rm main
