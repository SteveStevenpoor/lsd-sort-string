BIN_NAME	= lsd

SRCS		= main.cpp\
			  src/lsd.cpp\
			  src/lsd_test.cpp

HEADERS		= include/lsd.h

OBJ			= $(SRCS:.cpp=.o)

CC			= g++ -fsanitize=address

CFLAGS		= -Iinclude

LDFLAGS		= -fsanitize=address -lgtest -pthread

all: $(BIN_NAME) clean

clean:
	@rm -rf *.o src/*.o

.cpp.o:
	$(CC) $(CFLAGS) -c $< -o $@

$(BIN_NAME): $(OBJ)
	$(CC) $(LDFLAGS) $(OBJ) -o $@