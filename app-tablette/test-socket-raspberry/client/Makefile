# Binary name
EXEC = client
# List of source file
SRC = $(EXEC).c
OBJ = $(EXEC).o
CC = arm-opensdk-linux-gnueabi-gcc

all: bin

bin: $(EXEC)

$(EXEC): $(OBJ)
	$(CC) -o $@ $^ $(LFLAG)

%.o: %.c
	$(CC) $(CFLAG) -c $< 

clean :
	rm -f $(EXEC) $(OBJ)

send :
	scp $(EXEC) root@$(IPBOARD):/home/root/

board : clean bin send

host : clean
	gcc -c $(SRC)
	gcc -o $(EXEC) $(SRC)

