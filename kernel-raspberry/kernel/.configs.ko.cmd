cmd_kernel/configs.ko := arm-linux-gnueabihf-ld -EL -r  -T ./scripts/module-common.lds --build-id  -o kernel/configs.ko kernel/configs.o kernel/configs.mod.o
