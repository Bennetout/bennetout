IP_RASPBERRY = 192.168.1.10

PACKAGES = communication \
	    actionneurs

SRC = $(wildcard */*.c)
OBJ = $(SRC:.c=.o)

MAIN = main.c

#export CC = gcc
export CC = arm-linux-gnueabihf-gcc

export CCFLAGS = -g
export CCINCLUDE =
export LDFLAGS = -lpthread -lrt

EXEC = bennetout

# Cleaning
clean:
	rm -f $(EXEC)
	@for p in $(PACKAGES); do (cd $$p; $(MAKE) $@); done
	
all: clean
	for p in $(PACKAGES); do (cd $$p; $(MAKE) $@); done
	$(CC) $(CCFLAGS) $(CCINCLUDE) $(OBJ) $(MAIN) -o $(EXEC) $(LDFLAGS)

	
board:
	scp $(EXEC) pi@$(IP_RASPBERRY):/home/pi/