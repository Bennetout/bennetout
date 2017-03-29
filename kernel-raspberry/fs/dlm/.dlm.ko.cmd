cmd_fs/dlm/dlm.ko := arm-linux-gnueabihf-ld -EL -r  -T ./scripts/module-common.lds --build-id  -o fs/dlm/dlm.ko fs/dlm/dlm.o fs/dlm/dlm.mod.o
