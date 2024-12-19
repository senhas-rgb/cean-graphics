CXX = g++
CXXFLAGS = -std=c++17 -Wall -I utils/
LDFLAGS = -ldl -lraylib -lm -lpthread

SRC = $(/*.cpp) $(utils/*.cpp)  # Collect all .cpp files recursively
OUT = sigma

all: $(OUT)

$(OUT): $(SRC)
	$(CXX) $(SRC) $(CXXFLAGS) $(LDFLAGS) -o $(OUT)

clean:
	rm -f $(OUT)
