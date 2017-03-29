cmd_lib/lru_cache.ko := arm-linux-gnueabihf-ld -EL -r  -T ./scripts/module-common.lds --build-id  -o lib/lru_cache.ko lib/lru_cache.o lib/lru_cache.mod.o
