CXX = g++
CXXFLAGS = -std=c++11 -Wall

OBJECTS = voter.o fileHandler.o inputVerification.o
HEADERS = $(shell find . -path ./test -prune -o -name "*.hpp" -print)

main: main.o $(OBJECTS)
	$(CXX) $(CXXFLAGS) -o $@ $^

voter.o: voter.hpp voter.cpp
	$(CXX) $(CXXFLAGS) -c voter.cpp

fileHandler.o: fileHandler.hpp fileHandler.cpp
	$(CXX) $(CXXFLAGS) -c fileHandler.cpp
    
inputVerification.o: inputVerification.hpp inputVerification.cpp
	$(CXX) $(CXXFLAGS) -c inputVerification.cpp

$(OBJECTS): $(HEADERS)

clean:
	$(RM) *.o *.gch core main test/TestCase
