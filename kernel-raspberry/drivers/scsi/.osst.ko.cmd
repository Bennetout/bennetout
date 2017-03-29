cmd_drivers/scsi/osst.ko := arm-linux-gnueabihf-ld -EL -r  -T ./scripts/module-common.lds --build-id  -o drivers/scsi/osst.ko drivers/scsi/osst.o drivers/scsi/osst.mod.o
