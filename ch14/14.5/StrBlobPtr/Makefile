main: StrBlob.o main.o StrBlobPtr.o
	$(CXX) -std=c++11 $? -o $@
%.o : %.cc
	$(CXX) -std=c++11 -c $<
clean:
	rm main *.o
