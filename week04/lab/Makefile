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
# CXX = g++
# TARGET = testfiles
# OBJ = main.o printinfo.o factorial.o
# CXXFLAGS = -c -Wall

# $(TARGET): $(OBJ)
# 	$(CXX) $^ -o $@

# %.o: %.cpp
# 	$(CXX) $(CXXFLAGS) $< -o $@

# .PHONY: clean
# clean:
# 	rm -f *.o $(TARGET)

# Version 4
CXX = g++
TARGET = testfiles
SRC = $(wildcard *.cpp)
OBJ = $(patsubst %.cpp, %.o, $(SRC))

CXXFLAGS = -c -Wall

$(TARGET): $(OBJ)
	$(CXX) -o $@ $^

%.o: %.cpp
	$(CXX) $(CXXFLAGS) $< -o $@

.PHONY: clean
clean:
	rm -f *.o $(TARGET)

# Version 5
# SRC_DIR = ./src
# SOURCE = $(wildcard $(SRC_DIR)/*.cpp)
# OBJS = $(patsubst %.cpp, %.o, $(SOURCE))
# TARGET = testfiles
# INCLUDE = -I/inc  "-I means search files in the specific folder, i.e. inc folder --> all .h files are in inc

# CXX = g++
# CFLAGES = -c -Wall
# CXXFLAGS = $(CFLAGES) -O3

# $(TARGET): $(OBJS)
#	$(CXX) -o $@ $(OBJS)
# %.o: %.cpp
#	$(CXX) $(CXXFLAGES) $< -o $@ $(INCLUDE)

# .PHONY: clean
# clean:
# 	rm -f $(SRC_DIR)/*.o $(TARGET)