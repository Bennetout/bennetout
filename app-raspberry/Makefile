PACKAGES = leds \
		   libiio \
		   rotation-sensors \
		   inclino-sensors

SRC = $(wildcard */*.c)
OBJ = $(SRC:.c=.o)

MAIN = main.c

IP_RASPBERRY = 169.254.61.54

export CC = arm-linux-gnueabihf-gcc
export CCFLAGS = -g
export CCINCLUDE =
export LDFLAGS =  -L${PWD}/wiringPi/wiringPi -lpthread -lwiringPi -lrt

EXEC = bennetout

# Compiler
all:
	@for p in $(PACKAGES); do (cd $$p; $(MAKE) $@); done
	$(CC) $(CCFLAGS) $(CCINCLUDE) $(OBJ) $(MAIN) -o $(EXEC) $(LDFLAGS)

# Cleaning
clean:
	rm -f $(EXEC)
	@for p in $(PACKAGES); do (cd $$p; $(MAKE) $@); done

send:
	scp $(EXEC) pi@$(IP_RASPBERRY):/home/pi/

board: clean all send
