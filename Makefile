SRC := $(wildcard *.cc)
OBJ := $(basename $(SRC))
CXXFLAGS = -Wall -g -std=c++11
$(OBJ) : $(SRC)
	$(CXX) $(CXXFLAGS) -o $@ $^
