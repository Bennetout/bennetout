cmd_fs/ocfs2/ocfs2_stackglue.ko := arm-linux-gnueabihf-ld -EL -r  -T ./scripts/module-common.lds --build-id  -o fs/ocfs2/ocfs2_stackglue.ko fs/ocfs2/ocfs2_stackglue.o fs/ocfs2/ocfs2_stackglue.mod.o
