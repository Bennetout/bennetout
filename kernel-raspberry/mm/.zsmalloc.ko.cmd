cmd_mm/zsmalloc.ko := arm-linux-gnueabihf-ld -EL -r  -T ./scripts/module-common.lds --build-id  -o mm/zsmalloc.ko mm/zsmalloc.o mm/zsmalloc.mod.o
