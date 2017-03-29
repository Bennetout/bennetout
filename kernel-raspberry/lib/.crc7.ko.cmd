cmd_lib/crc7.ko := arm-linux-gnueabihf-ld -EL -r  -T ./scripts/module-common.lds --build-id  -o lib/crc7.ko lib/crc7.o lib/crc7.mod.o
