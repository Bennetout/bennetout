SRC = $(wildcard *.c)
OBJ = $(SRC:.c=.o)

CCINCLUDE +=
all: $(OBJ)

.c.o:
	$(CC) -c $(CCFLAGS) $(CCINCLUDE) $< -o $@

clean:
	rm -f $(OBJ)
