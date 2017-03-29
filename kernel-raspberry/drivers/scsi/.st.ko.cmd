cmd_drivers/scsi/st.ko := arm-linux-gnueabihf-ld -EL -r  -T ./scripts/module-common.lds --build-id  -o drivers/scsi/st.ko drivers/scsi/st.o drivers/scsi/st.mod.o
