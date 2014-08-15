cmd_usr/initramfs_data.o := mips-openwrt-linux-uclibc-gcc -Wp,-MD,usr/.initramfs_data.o.d  -nostdinc -isystem /home/shizhai/new_zhongwang/trunk/staging_dir/toolchain-mips_r2_gcc-4.6-linaro_uClibc-0.9.33.2/lib/gcc/mips-openwrt-linux-uclibc/4.6.4/include -I/home/shizhai/new_zhongwang/trunk/build_dir/target-mips_r2_uClibc-0.9.33.2/linux-ar71xx_generic/linux-3.10.4/arch/mips/include -Iarch/mips/include/generated  -Iinclude -I/home/shizhai/new_zhongwang/trunk/build_dir/target-mips_r2_uClibc-0.9.33.2/linux-ar71xx_generic/linux-3.10.4/arch/mips/include/uapi -Iarch/mips/include/generated/uapi -I/home/shizhai/new_zhongwang/trunk/build_dir/target-mips_r2_uClibc-0.9.33.2/linux-ar71xx_generic/linux-3.10.4/include/uapi -Iinclude/generated/uapi -include /home/shizhai/new_zhongwang/trunk/build_dir/target-mips_r2_uClibc-0.9.33.2/linux-ar71xx_generic/linux-3.10.4/include/linux/kconfig.h -D__KERNEL__ -DVMLINUX_LOAD_ADDRESS=0xffffffff80060000 -DDATAOFFSET=0  -D__ASSEMBLY__  -mno-check-zero-division -mabi=32 -G 0 -mno-abicalls -fno-pic -pipe -mno-branch-likely -msoft-float -ffreestanding  -march=mips32r2 -Wa,-mips32r2 -Wa,--trap -I/home/shizhai/new_zhongwang/trunk/build_dir/target-mips_r2_uClibc-0.9.33.2/linux-ar71xx_generic/linux-3.10.4/arch/mips/include/asm/mach-ath79 -I/home/shizhai/new_zhongwang/trunk/build_dir/target-mips_r2_uClibc-0.9.33.2/linux-ar71xx_generic/linux-3.10.4/arch/mips/include/asm/mach-generic -gdwarf-2      -DINITRAMFS_IMAGE="usr/initramfs_data.cpio"   -c -o usr/initramfs_data.o usr/initramfs_data.S

source_usr/initramfs_data.o := usr/initramfs_data.S

deps_usr/initramfs_data.o := \
    $(wildcard include/config/64bit.h) \
  include/linux/stringify.h \
  include/asm-generic/vmlinux.lds.h \
    $(wildcard include/config/hotplug.h) \
    $(wildcard include/config/hotplug/cpu.h) \
    $(wildcard include/config/memory/hotplug.h) \
    $(wildcard include/config/ftrace/mcount/record.h) \
    $(wildcard include/config/trace/branch/profiling.h) \
    $(wildcard include/config/profile/all/branches.h) \
    $(wildcard include/config/event/tracing.h) \
    $(wildcard include/config/tracing.h) \
    $(wildcard include/config/ftrace/syscalls.h) \
    $(wildcard include/config/clksrc/of.h) \
    $(wildcard include/config/irqchip.h) \
    $(wildcard include/config/common/clk.h) \
    $(wildcard include/config/function/graph/tracer.h) \
    $(wildcard include/config/constructors.h) \
    $(wildcard include/config/generic/bug.h) \
    $(wildcard include/config/pm/trace.h) \
    $(wildcard include/config/blk/dev/initrd.h) \
  include/linux/export.h \
    $(wildcard include/config/have/underscore/symbol/prefix.h) \
    $(wildcard include/config/modules.h) \
    $(wildcard include/config/modversions.h) \
    $(wildcard include/config/unused/symbols.h) \

usr/initramfs_data.o: $(deps_usr/initramfs_data.o)

$(deps_usr/initramfs_data.o):
