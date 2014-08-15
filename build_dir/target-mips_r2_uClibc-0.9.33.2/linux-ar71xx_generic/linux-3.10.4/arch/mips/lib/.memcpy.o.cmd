cmd_arch/mips/lib/memcpy.o := mips-openwrt-linux-uclibc-gcc -Wp,-MD,arch/mips/lib/.memcpy.o.d  -nostdinc -isystem /home/shizhai/new_zhongwang/trunk/staging_dir/toolchain-mips_r2_gcc-4.6-linaro_uClibc-0.9.33.2/lib/gcc/mips-openwrt-linux-uclibc/4.6.4/include -I/home/shizhai/new_zhongwang/trunk/build_dir/target-mips_r2_uClibc-0.9.33.2/linux-ar71xx_generic/linux-3.10.4/arch/mips/include -Iarch/mips/include/generated  -Iinclude -I/home/shizhai/new_zhongwang/trunk/build_dir/target-mips_r2_uClibc-0.9.33.2/linux-ar71xx_generic/linux-3.10.4/arch/mips/include/uapi -Iarch/mips/include/generated/uapi -I/home/shizhai/new_zhongwang/trunk/build_dir/target-mips_r2_uClibc-0.9.33.2/linux-ar71xx_generic/linux-3.10.4/include/uapi -Iinclude/generated/uapi -include /home/shizhai/new_zhongwang/trunk/build_dir/target-mips_r2_uClibc-0.9.33.2/linux-ar71xx_generic/linux-3.10.4/include/linux/kconfig.h -D__KERNEL__ -DVMLINUX_LOAD_ADDRESS=0xffffffff80060000 -DDATAOFFSET=0  -D__ASSEMBLY__  -mno-check-zero-division -mabi=32 -G 0 -mno-abicalls -fno-pic -pipe -mno-branch-likely -msoft-float -ffreestanding  -march=mips32r2 -Wa,-mips32r2 -Wa,--trap -I/home/shizhai/new_zhongwang/trunk/build_dir/target-mips_r2_uClibc-0.9.33.2/linux-ar71xx_generic/linux-3.10.4/arch/mips/include/asm/mach-ath79 -I/home/shizhai/new_zhongwang/trunk/build_dir/target-mips_r2_uClibc-0.9.33.2/linux-ar71xx_generic/linux-3.10.4/arch/mips/include/asm/mach-generic -gdwarf-2         -c -o arch/mips/lib/memcpy.o arch/mips/lib/memcpy.S

source_arch/mips/lib/memcpy.o := arch/mips/lib/memcpy.S

deps_arch/mips/lib/memcpy.o := \
    $(wildcard include/config/dma/noncoherent.h) \
    $(wildcard include/config/cpu/has/prefetch.h) \
    $(wildcard include/config/mips/malta.h) \
    $(wildcard include/config/64bit.h) \
    $(wildcard include/config/cpu/little/endian.h) \
    $(wildcard include/config/cpu/daddi/workarounds.h) \
    $(wildcard include/config/cpu/sb1.h) \
  /home/shizhai/new_zhongwang/trunk/build_dir/target-mips_r2_uClibc-0.9.33.2/linux-ar71xx_generic/linux-3.10.4/arch/mips/include/asm/asm.h \
    $(wildcard include/config/printk.h) \
    $(wildcard include/config/sgi/ip28.h) \
  /home/shizhai/new_zhongwang/trunk/build_dir/target-mips_r2_uClibc-0.9.33.2/linux-ar71xx_generic/linux-3.10.4/arch/mips/include/uapi/asm/sgidefs.h \
  /home/shizhai/new_zhongwang/trunk/build_dir/target-mips_r2_uClibc-0.9.33.2/linux-ar71xx_generic/linux-3.10.4/arch/mips/include/asm/asm-offsets.h \
  include/generated/asm-offsets.h \
  /home/shizhai/new_zhongwang/trunk/build_dir/target-mips_r2_uClibc-0.9.33.2/linux-ar71xx_generic/linux-3.10.4/arch/mips/include/asm/regdef.h \

arch/mips/lib/memcpy.o: $(deps_arch/mips/lib/memcpy.o)

$(deps_arch/mips/lib/memcpy.o):
