cmd_lib/lz4/lz4_compress.ko := arm-linux-gnueabihf-ld -EL -r  -T ./scripts/module-common.lds --build-id  -o lib/lz4/lz4_compress.ko lib/lz4/lz4_compress.o lib/lz4/lz4_compress.mod.o
