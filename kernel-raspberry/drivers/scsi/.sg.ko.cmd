cmd_drivers/scsi/sg.ko := arm-linux-gnueabihf-ld -EL -r  -T ./scripts/module-common.lds --build-id  -o drivers/scsi/sg.ko drivers/scsi/sg.o drivers/scsi/sg.mod.o
