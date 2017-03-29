cmd_lib/ts_kmp.ko := arm-linux-gnueabihf-ld -EL -r  -T ./scripts/module-common.lds --build-id  -o lib/ts_kmp.ko lib/ts_kmp.o lib/ts_kmp.mod.o
