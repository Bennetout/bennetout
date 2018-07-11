PACKAGES = communication

SRC = $(wildcard */*.c)
OBJ = $(SRC:.c=.o)

MAIN = main.c

export CC = gcc
export CCFLAGS = -g
export CCINCLUDE =
export LDFLAGS = -lpthread -lrt

EXEC = bennetout

all:
	for p in $(PACKAGES); do (cd $$p; $(MAKE) $@); done
	$(CC) $(CCFLAGS) $(CCINCLUDE) $(OBJ) $(MAIN) -o $(EXEC) $(LDFLAGS)

# Cleaning
clean:
	rm -f $(EXEC)
	@for p in $(PACKAGES); do (cd $$p; $(MAKE) $@); done