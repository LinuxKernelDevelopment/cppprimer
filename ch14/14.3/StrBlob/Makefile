CXXFLAGS = -Wall -g -std=c++11
main : main.o StrBlob.o
	$(CXX) $(CXXFLAGS) $? -o $@
main.o : main.cc
StrBlob.o : StrBlob.cc
clean:
	rm main *.o
