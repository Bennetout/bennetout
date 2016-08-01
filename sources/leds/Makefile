SRC = $(wildcard *.c)
OBJ = $(SRC:.c=.o)

CCINCLUDE += -I/local/home/monierc/raspberry/wiringPi-b0a60c3/wiringPi
all: $(OBJ)

.c.o:
	$(CC) -c $(CCFLAGS) $(CCINCLUDE) $< -o $@

clean:
	rm -f $(OBJ)
