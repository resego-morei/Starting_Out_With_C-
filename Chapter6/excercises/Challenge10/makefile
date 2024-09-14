# Compiler
CXX = g++

# Compiler flags for C++98
CXXFLAGS = -Wall -std=c++98

# Target executable name
TARGET = futureValue

# Source files
SRCS = futureValue.cpp

# Object files
OBJS = $(SRCS:.cpp=.o)

# Default target: Build the program
all: $(TARGET)

# Rule to build the target executable
$(TARGET): $(OBJS)
	$(CXX) $(CXXFLAGS) -o $(TARGET) $(OBJS)

# Rule to compile source files into object files
%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $<

# Clean rule to remove object files and executable
clean:
	rm -f $(OBJS) $(TARGET)

# Phony targets
.PHONY: all clean
