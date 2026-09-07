CXX := clang++
CXXFLAGS := -std=c++23 -Wall -Wextra -g

SRC := $(wildcard *.cpp)
TARGET := bin.out

$(TARGET): $(SRC)
	$(CXX) $(CXXFLAGS) $(SRC) -o $(TARGET)

run: $(TARGET)
	./$(TARGET)

clean:
	rm -f $(TARGET)

.PHONY: run clean
