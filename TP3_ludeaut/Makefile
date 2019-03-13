CXX = g++
CXXFLAGS = -std=c++11 -g -Wall -pedantic -fno-elide-constructors
LDFLAGS =
EXECUTABLE = Dvector_test
SOURCES = src/Dvector_test.cpp
OBJETS = $(SOURCES:.cpp=.o)

$(EXECUTABLE) : $(OBJETS)
		$(CXX) $(CXXFLAGS) -o $@ $^ $(LDFLAGS)

$(OBJETS) : $(SOURCES)
		$(CXX) $(CXXFLAGS) -c $< -o $@

clean :
		rm -f $(EXECUTABLE) $(OBJETS)
