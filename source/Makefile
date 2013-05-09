
CC = g++
FLAGS = -std=c++11 -W -Wall 
LIBS = -lglut -lGL -lGLU -lGLEW
INCLUDE_DIRS = -I./

all: client server

client: window.o loop.o world.o player.o
	$(CC) $(FLAGS) $(LIBS) client/main.cpp -o client_bin window.o world.o loop.o player.o $(INCLUDE_DIRS)

server:
	$(CC) $(FLAGS) $(LIBS) server/main.cpp -o server_bin $(INCLUDE_DIRS)

window.o:
	$(CC) $(FLAGS) $(LIBS) -c ./client/view/window.cpp $(INCLUDE_DIRS)

world.o:
	$(CC) $(FLAGS) $(LIBS) -c ./common/model/world.cpp $(INCLUDE_DIRS)

loop.o:
	$(CC) $(FLAGS) $(LIBS) -c ./client/controller/loop.cpp $(INCLUDE_DIRS)

player.o:
	$(CC) $(FLAGS) $(LIBS) -c ./common/model/player.cpp $(INCLUDE_DIRS)

clean:
	rm client_bin server_bin window.o world.o loop.o player.o

