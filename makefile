# compilatorul utilizat

CXX = g++
#CXXFLAGS = -std=c++17 -Wall -I./ -I/usr/local/include
#LDFLAGS = -lsfml-graphics -lsfml-window -lsfml-system -L/usr/local/lib

CXXFLAGS = -std=c++17 -Wall -I./ -I/opt/homebrew/Cellar/sfml/2.6.2/include
LDFLAGS = -L/opt/homebrew/Cellar/sfml/2.6.2/lib -lsfml-graphics -lsfml-window -lsfml-system

# lista surselor
SOURCES = apple.cpp board.cpp direction.cpp game.cpp painter.cpp point.cpp snake.cpp main.cpp


# obiectele generate din surse
OBJECTS = $(SOURCES:.cpp=.o)

# numele executabilului
TARGET = SnakeGame

# regula implicita pentru compilare
all: $(TARGET)

# regula pentru linkare
$(TARGET): $(OBJECTS)
	$(CXX) $(CXXFLAGS) -o $@ $^ $(LDFLAGS)

# regula pentru generarea fisierelor obiect
%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

# curata toate fisierele generate
clean:
	rm -f $(OBJECTS) $(TARGET)

# regula pentru curatare completa, inclusiv biblioteci
distclean: clean
	rm -f *.a *.so
