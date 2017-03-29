SRC = $(wildcard *.c)
OBJ = $(SRC:.c=.o)

CCINCLUDE +=
CINCLUDE = -I${PWD}/../libwiringPi/src
all: $(OBJ)

.c.o:
	$(CC) -c $(CCFLAGS) $(CINCLUDE) $< -o $@

clean:
	rm -f $(OBJ)
