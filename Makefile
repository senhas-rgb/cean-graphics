# Compiler settings
CXX = g++
CXXFLAGS = -Wall -Wextra -std=c++17 -I.

# Raylib settings
RAYLIB_LIBS = -lraylib -lGL -lm -lpthread -ldl -lrt -lX11

# Directories
SRC_DIR = .
OBJ_DIR = obj
BIN_DIR = bin

# Project files
SRCS = $(wildcard $(SRC_DIR)/*.cpp) $(wildcard $(SRC_DIR)/utils/*.cpp)
OBJS = $(patsubst %.cpp,$(OBJ_DIR)/%.o,$(notdir $(SRCS)))
TARGET = $(BIN_DIR)/game

# Build rules
all: $(TARGET)

# Link object files to create the executable
$(TARGET): $(OBJS)
	@mkdir -p $(BIN_DIR)
	$(CXX) $(OBJS) -o $(TARGET) $(RAYLIB_LIBS) $(CXXFLAGS)

# Compile .cpp files to .o files
$(OBJ_DIR)/%.o: $(SRC_DIR)/%.cpp
	@mkdir -p $(OBJ_DIR)
	$(CXX) $(CXXFLAGS) -c $< -o $@

$(OBJ_DIR)/%.o: $(SRC_DIR)/utils/%.cpp
	@mkdir -p $(OBJ_DIR)
	$(CXX) $(CXXFLAGS) -c $< -o $@

# Clean up
clean:
	rm -rf $(OBJ_DIR) $(BIN_DIR)

.PHONY: all clean
