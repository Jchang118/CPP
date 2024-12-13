CXX = g++
TARGET = fib
OBJ = main.o fib.o
CXXFLAGS = -c -Wall

$(TARGET): $(OBJ)
	$(CXX) $^ -o $@

%.o: %.cpp
	$(CXX) $(CXXFLAGS) $< -o $@

.PHONY: clean
clean:
	rm -f *.o $(TARGET)