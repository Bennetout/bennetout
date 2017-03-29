cmd_drivers/hwmon/hwmon.ko := arm-linux-gnueabihf-ld -EL -r  -T ./scripts/module-common.lds --build-id  -o drivers/hwmon/hwmon.ko drivers/hwmon/hwmon.o drivers/hwmon/hwmon.mod.o
