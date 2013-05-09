
all: main

main: view/gamewindow.o
	g++ -W -Wall main.cpp -lglut -lGL -lGLU -lGLEW -o main

view/gamewindow.o:
	g++ -W -Wall -w view/gamewindow.cpp -lglut -lGL -lGLU -lGLEW

clean:
	rm main
