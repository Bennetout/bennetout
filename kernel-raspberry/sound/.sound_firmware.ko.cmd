cmd_sound/sound_firmware.ko := arm-linux-gnueabihf-ld -EL -r  -T ./scripts/module-common.lds --build-id  -o sound/sound_firmware.ko sound/sound_firmware.o sound/sound_firmware.mod.o
