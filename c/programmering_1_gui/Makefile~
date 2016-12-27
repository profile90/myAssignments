CXX = g++
CFLAGS = -Wall
NAME_EX = programmering
LOG = LOG.txt
ERLOG = ERLOG.txt
all: compile

clean:
	rm $(NAME_EX) > $(LOG)
	echo CLEAN COMPLETE > $(LOG)
compile: 
	$(CXX) -o $(NAME_EX) main.cpp sbib.cpp $(CFLAGS)

