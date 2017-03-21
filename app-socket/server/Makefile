# Binary name
EXEC = server
# List of source file
SRC = $(EXEC).c
OBJ = $(EXEC).o
CC = arm-linux-gnueabihf-gcc

all: bin

bin: $(EXEC)

$(EXEC): $(OBJ)
	$(CC) -o $@ $^ $(LFLAG)

%.o: %.c
	$(CC) $(CFLAG) -c $< 

clean :
	rm -f $(EXEC) $(OBJ)

send :
	scp $(EXEC) pi@$(IPBOARD):/home/pi/

board : clean bin send

host : clean
	gcc -c $(SRC)
	gcc -o $(EXEC) $(SRC)

