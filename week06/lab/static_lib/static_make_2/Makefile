#link with static library in makefile

OBJS = $(patsubst %.c, %.o, $(wildcard ./*.c))
TARGET = main
CC = gcc

LDFLAGE = -L./lib_a
LIB = -lmyfun

$(TARGET): $(OBJS)
	$(CC) $^ -o $@ $(LIB) $(LDFLAGE)

%.o: %.c
	$(CC) -c $^ -o $@

clean:
	rm -f *.o $(TARGET)