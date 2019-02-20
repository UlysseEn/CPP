CXX = g++
CXXFLAGS = -std=c++11 -g -Wall -pedantic -fno-elide-constructors
LDFLAGS =
EXECUTABLE = tests/test1 tests/test2 tests/test3
SOURCES = $(EXECUTABLE:=.cpp)
OBJETS = $(SOURCES:.cpp=.o)

all: $(EXECUTABLE)

tests/test1 : tests/test1.o
		$(CXX) $(CXXFLAGS) -o $@ $^ $(LDFLAGS)

tests/test2 : tests/test2.o
		$(CXX) $(CXXFLAGS) -o $@ $^ $(LDFLAGS)

tests/test3 : tests/test3.o
		$(CXX) $(CXXFLAGS) -o $@ $^ $(LDFLAGS)

.cpp.o :
		$(CXX) $(CXXFLAGS) -c $< -o $@

clean :
		rm -f $(EXECUTABLE) $(OBJETS)
