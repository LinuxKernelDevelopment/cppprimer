object=StrBlob.o main.o StrBlobPtr.o
CXXFLAGS=-g -std=c++11 -Wall
main: $(object)
	$(CXX) -o main $(object)

StrBlob.o : StrBlob.cc StrBlob.h

StrBlobPtr.o : StrBlobPtr.cc StrBlobPtr.h

.PHONY: clean

clean:
	$(RM) main $(object)
