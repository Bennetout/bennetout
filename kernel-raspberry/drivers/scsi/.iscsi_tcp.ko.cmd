cmd_drivers/scsi/iscsi_tcp.ko := arm-linux-gnueabihf-ld -EL -r  -T ./scripts/module-common.lds --build-id  -o drivers/scsi/iscsi_tcp.ko drivers/scsi/iscsi_tcp.o drivers/scsi/iscsi_tcp.mod.o
