SRC = $(wildcard *.c)
OBJ = $(SRC:.c=.o)

CCINCLUDE +=
CINCLUDE = -I${PWD}/../wiringPi/wiringPi
all: $(OBJ)

.c.o:
	$(CC) -c $(CCFLAGS) $(CINCLUDE) $< -o $@

clean:
	rm -f $(OBJ)
