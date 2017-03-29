cmd_drivers/scsi/sr_mod.ko := arm-linux-gnueabihf-ld -EL -r  -T ./scripts/module-common.lds --build-id  -o drivers/scsi/sr_mod.ko drivers/scsi/sr_mod.o drivers/scsi/sr_mod.mod.o
