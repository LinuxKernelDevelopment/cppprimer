SRC := $(wildcard *.cpp)
SRC += $(wildcard *.cc)
OBJ := $(basename $(SRC))
CXXFLAGS = -Wall -g -std=c++11
all: $(OBJ)
