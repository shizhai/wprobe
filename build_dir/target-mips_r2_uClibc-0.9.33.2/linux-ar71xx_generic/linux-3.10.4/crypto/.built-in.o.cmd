cmd_crypto/built-in.o :=  mips-openwrt-linux-uclibc-ld  -m elf32btsmip   -r -o crypto/built-in.o crypto/crypto.o crypto/crypto_algapi.o crypto/cryptomgr.o crypto/aes_generic.o 
