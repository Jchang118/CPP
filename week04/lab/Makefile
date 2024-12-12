# Since testfiles target is in the first, it is the default target
# and will be run when we run "make"

# Version 1
# testfiles: main.cpp printinfo.cpp factorial.cpp
#	g++ -o testfiles main.cpp printinfo.cpp factorial.cpp

# Version 2
# Using variables in makefile

# CXX = g++
# TARGET = testfiles
# OBJ = main.o printinfo.o factorial.o
# $(TARGET): $(OBJ)
#	$(CXX) -o $(TARGET) $(OBJ)

# main.o: main.cpp
#	$(CXX) -c main.cpp

# printinfo.o: printinfo.cpp
#	$(CXX) -c printinfo.cpp

# factorial.o: factorial.cpp
#	$(CXX) -c factorial.cpp

# Version 3
CXX = g++
TARGET = testfiles
OBJ = main.o printinfo.o factorial.o
CXXFLAGS = -c -Wall

$(TARGET): $(OBJ)
	$(CXX) $^ -o $@

%.o: %.cpp
	$(CXX) $(CXXFLAGS) $< -o $@

.PHONY: clean
clean:
	rm -f *.o $(TARGET)