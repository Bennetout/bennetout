SRC = $(wildcard *.c)
OBJ = $(SRC:.c=.o)

CCINCLUDE += -I/home/monier/Raspberry/wiringPi/wiringPi
all: $(OBJ)

.c.o:
	$(CC) -c $(CCFLAGS) $(CCINCLUDE) $< -o $@

clean:
	rm -f $(OBJ)
