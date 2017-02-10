CXX = g++
CFLAGS = -Wall -std=c++11
NAME_EX = class
LOG = LOG.txt
ERLOG = ERLOG.txt
all: compile

clean:
	rm $(NAME_EX) > $(LOG)
	echo CLEAN COMPLETE > $(LOG)
compile:
	$(CXX) -o $(NAME_EX) class.cpp $(CFLAGS)
