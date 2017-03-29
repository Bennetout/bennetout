cmd_kernel/power/built-in.o :=  arm-linux-gnueabihf-ld -EL    -r -o kernel/power/built-in.o kernel/power/qos.o kernel/power/main.o kernel/power/process.o kernel/power/poweroff.o 
