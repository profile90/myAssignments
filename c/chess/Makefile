CXX = g++
CFLAGS_WALL_GUI = -Wall -lX11
CFLAGS_WALL = -Wall
CFLAGS = 
NAME_EX = chess
LOG = LOG.txt
ERLOG = ERLOG.txt
all: compile

clean:
	rm $(NAME_EX) > $(LOG)
	echo CLEAN COMPLETE > $(LOG)
compile: 
	$(CXX) -o $(NAME_EX) main.cpp $(CFLAGS_WALL_GUI) 




