cmd_lib/md5.o := mips-openwrt-linux-uclibc-gcc -Wp,-MD,lib/.md5.o.d  -nostdinc -isystem /home/shizhai/new_zhongwang/trunk/staging_dir/toolchain-mips_r2_gcc-4.6-linaro_uClibc-0.9.33.2/lib/gcc/mips-openwrt-linux-uclibc/4.6.4/include -I/home/shizhai/new_zhongwang/trunk/build_dir/target-mips_r2_uClibc-0.9.33.2/linux-ar71xx_generic/linux-3.10.4/arch/mips/include -Iarch/mips/include/generated  -Iinclude -I/home/shizhai/new_zhongwang/trunk/build_dir/target-mips_r2_uClibc-0.9.33.2/linux-ar71xx_generic/linux-3.10.4/arch/mips/include/uapi -Iarch/mips/include/generated/uapi -I/home/shizhai/new_zhongwang/trunk/build_dir/target-mips_r2_uClibc-0.9.33.2/linux-ar71xx_generic/linux-3.10.4/include/uapi -Iinclude/generated/uapi -include /home/shizhai/new_zhongwang/trunk/build_dir/target-mips_r2_uClibc-0.9.33.2/linux-ar71xx_generic/linux-3.10.4/include/linux/kconfig.h -D__KERNEL__ -DVMLINUX_LOAD_ADDRESS=0xffffffff80060000 -DDATAOFFSET=0 -Wall -Wundef -Wstrict-prototypes -Wno-trigraphs -fno-strict-aliasing -fno-common -Werror-implicit-function-declaration -Wno-format-security -fno-delete-null-pointer-checks -Os -fno-caller-saves -mno-check-zero-division -mabi=32 -G 0 -mno-abicalls -fno-pic -pipe -mno-branch-likely -msoft-float -ffreestanding -march=mips32r2 -Wa,-mips32r2 -Wa,--trap -I/home/shizhai/new_zhongwang/trunk/build_dir/target-mips_r2_uClibc-0.9.33.2/linux-ar71xx_generic/linux-3.10.4/arch/mips/include/asm/mach-ath79 -I/home/shizhai/new_zhongwang/trunk/build_dir/target-mips_r2_uClibc-0.9.33.2/linux-ar71xx_generic/linux-3.10.4/arch/mips/include/asm/mach-generic -Wframe-larger-than=1024 -fno-stack-protector -Wno-unused-but-set-variable -fomit-frame-pointer -g -femit-struct-debug-baseonly -fno-var-tracking -Wdeclaration-after-statement -Wno-pointer-sign -fno-strict-overflow -fconserve-stack -DCC_HAVE_ASM_GOTO   -ffunction-sections -fdata-sections  -D"KBUILD_STR(s)=\#s" -D"KBUILD_BASENAME=KBUILD_STR(md5)"  -D"KBUILD_MODNAME=KBUILD_STR(md5)" -c -o lib/md5.o lib/md5.c

source_lib/md5.o := lib/md5.c

deps_lib/md5.o := \
  include/linux/kernel.h \
    $(wildcard include/config/lbdaf.h) \
    $(wildcard include/config/preempt/voluntary.h) \
    $(wildcard include/config/debug/atomic/sleep.h) \
    $(wildcard include/config/prove/locking.h) \
    $(wildcard include/config/ring/buffer.h) \
    $(wildcard include/config/tracing.h) \
    $(wildcard include/config/ftrace/mcount/record.h) \
  /home/shizhai/new_zhongwang/trunk/staging_dir/toolchain-mips_r2_gcc-4.6-linaro_uClibc-0.9.33.2/lib/gcc/mips-openwrt-linux-uclibc/4.6.4/include/stdarg.h \
  include/linux/linkage.h \
  include/linux/compiler.h \
    $(wildcard include/config/sparse/rcu/pointer.h) \
    $(wildcard include/config/trace/branch/profiling.h) \
    $(wildcard include/config/profile/all/branches.h) \
    $(wildcard include/config/enable/must/check.h) \
    $(wildcard include/config/enable/warn/deprecated.h) \
    $(wildcard include/config/kprobes.h) \
  include/linux/compiler-gcc.h \
    $(wildcard include/config/arch/supports/optimized/inlining.h) \
    $(wildcard include/config/optimize/inlining.h) \
  include/linux/compiler-gcc4.h \
    $(wildcard include/config/arch/use/builtin/bswap.h) \
  include/linux/stringify.h \
  include/linux/export.h \
    $(wildcard include/config/have/underscore/symbol/prefix.h) \
    $(wildcard include/config/modules.h) \
    $(wildcard include/config/modversions.h) \
    $(wildcard include/config/unused/symbols.h) \
  /home/shizhai/new_zhongwang/trunk/build_dir/target-mips_r2_uClibc-0.9.33.2/linux-ar71xx_generic/linux-3.10.4/arch/mips/include/asm/linkage.h \
  include/linux/stddef.h \
  include/uapi/linux/stddef.h \
  include/linux/types.h \
    $(wildcard include/config/uid16.h) \
    $(wildcard include/config/arch/dma/addr/t/64bit.h) \
    $(wildcard include/config/phys/addr/t/64bit.h) \
    $(wildcard include/config/64bit.h) \
  include/uapi/linux/types.h \
  /home/shizhai/new_zhongwang/trunk/build_dir/target-mips_r2_uClibc-0.9.33.2/linux-ar71xx_generic/linux-3.10.4/arch/mips/include/asm/types.h \
    $(wildcard include/config/64bit/phys/addr.h) \
  include/asm-generic/int-ll64.h \
  include/uapi/asm-generic/int-ll64.h \
  /home/shizhai/new_zhongwang/trunk/build_dir/target-mips_r2_uClibc-0.9.33.2/linux-ar71xx_generic/linux-3.10.4/arch/mips/include/uapi/asm/bitsperlong.h \
  include/asm-generic/bitsperlong.h \
  include/uapi/asm-generic/bitsperlong.h \
  /home/shizhai/new_zhongwang/trunk/build_dir/target-mips_r2_uClibc-0.9.33.2/linux-ar71xx_generic/linux-3.10.4/arch/mips/include/uapi/asm/types.h \
  /home/shizhai/new_zhongwang/trunk/build_dir/target-mips_r2_uClibc-0.9.33.2/linux-ar71xx_generic/linux-3.10.4/include/uapi/linux/posix_types.h \
  /home/shizhai/new_zhongwang/trunk/build_dir/target-mips_r2_uClibc-0.9.33.2/linux-ar71xx_generic/linux-3.10.4/arch/mips/include/uapi/asm/posix_types.h \
  /home/shizhai/new_zhongwang/trunk/build_dir/target-mips_r2_uClibc-0.9.33.2/linux-ar71xx_generic/linux-3.10.4/arch/mips/include/uapi/asm/sgidefs.h \
  /home/shizhai/new_zhongwang/trunk/build_dir/target-mips_r2_uClibc-0.9.33.2/linux-ar71xx_generic/linux-3.10.4/include/uapi/asm-generic/posix_types.h \
  include/linux/bitops.h \
  /home/shizhai/new_zhongwang/trunk/build_dir/target-mips_r2_uClibc-0.9.33.2/linux-ar71xx_generic/linux-3.10.4/arch/mips/include/asm/bitops.h \
    $(wildcard include/config/cpu/mipsr2.h) \
  /home/shizhai/new_zhongwang/trunk/build_dir/target-mips_r2_uClibc-0.9.33.2/linux-ar71xx_generic/linux-3.10.4/arch/mips/include/asm/barrier.h \
    $(wildcard include/config/cpu/has/sync.h) \
    $(wildcard include/config/cpu/cavium/octeon.h) \
    $(wildcard include/config/sgi/ip28.h) \
    $(wildcard include/config/cpu/has/wb.h) \
    $(wildcard include/config/weak/ordering.h) \
    $(wildcard include/config/smp.h) \
    $(wildcard include/config/weak/reordering/beyond/llsc.h) \
  /home/shizhai/new_zhongwang/trunk/build_dir/target-mips_r2_uClibc-0.9.33.2/linux-ar71xx_generic/linux-3.10.4/arch/mips/include/asm/addrspace.h \
    $(wildcard include/config/cpu/r8000.h) \
  /home/shizhai/new_zhongwang/trunk/build_dir/target-mips_r2_uClibc-0.9.33.2/linux-ar71xx_generic/linux-3.10.4/arch/mips/include/asm/mach-generic/spaces.h \
    $(wildcard include/config/32bit.h) \
    $(wildcard include/config/kvm/guest.h) \
    $(wildcard include/config/dma/noncoherent.h) \
  /home/shizhai/new_zhongwang/trunk/build_dir/target-mips_r2_uClibc-0.9.33.2/linux-ar71xx_generic/linux-3.10.4/include/uapi/linux/const.h \
  /home/shizhai/new_zhongwang/trunk/build_dir/target-mips_r2_uClibc-0.9.33.2/linux-ar71xx_generic/linux-3.10.4/arch/mips/include/uapi/asm/byteorder.h \
  include/linux/byteorder/big_endian.h \
  include/uapi/linux/byteorder/big_endian.h \
  include/linux/swab.h \
  include/uapi/linux/swab.h \
  /home/shizhai/new_zhongwang/trunk/build_dir/target-mips_r2_uClibc-0.9.33.2/linux-ar71xx_generic/linux-3.10.4/arch/mips/include/uapi/asm/swab.h \
  include/linux/byteorder/generic.h \
  /home/shizhai/new_zhongwang/trunk/build_dir/target-mips_r2_uClibc-0.9.33.2/linux-ar71xx_generic/linux-3.10.4/arch/mips/include/asm/cpu-features.h \
    $(wildcard include/config/sys/supports/micromips.h) \
    $(wildcard include/config/cpu/mipsr2/irq/vi.h) \
    $(wildcard include/config/cpu/mipsr2/irq/ei.h) \
  /home/shizhai/new_zhongwang/trunk/build_dir/target-mips_r2_uClibc-0.9.33.2/linux-ar71xx_generic/linux-3.10.4/arch/mips/include/asm/cpu.h \
  /home/shizhai/new_zhongwang/trunk/build_dir/target-mips_r2_uClibc-0.9.33.2/linux-ar71xx_generic/linux-3.10.4/arch/mips/include/asm/cpu-info.h \
    $(wildcard include/config/mips/mt/smp.h) \
    $(wildcard include/config/mips/mt/smtc.h) \
  /home/shizhai/new_zhongwang/trunk/build_dir/target-mips_r2_uClibc-0.9.33.2/linux-ar71xx_generic/linux-3.10.4/arch/mips/include/asm/cache.h \
    $(wildcard include/config/mips/l1/cache/shift.h) \
  /home/shizhai/new_zhongwang/trunk/build_dir/target-mips_r2_uClibc-0.9.33.2/linux-ar71xx_generic/linux-3.10.4/arch/mips/include/asm/mach-generic/kmalloc.h \
    $(wildcard include/config/dma/coherent.h) \
  /home/shizhai/new_zhongwang/trunk/build_dir/target-mips_r2_uClibc-0.9.33.2/linux-ar71xx_generic/linux-3.10.4/arch/mips/include/asm/mach-ath79/cpu-feature-overrides.h \
  /home/shizhai/new_zhongwang/trunk/build_dir/target-mips_r2_uClibc-0.9.33.2/linux-ar71xx_generic/linux-3.10.4/arch/mips/include/asm/war.h \
    $(wildcard include/config/cpu/r4000/workarounds.h) \
    $(wildcard include/config/cpu/r4400/workarounds.h) \
    $(wildcard include/config/cpu/daddi/workarounds.h) \
  /home/shizhai/new_zhongwang/trunk/build_dir/target-mips_r2_uClibc-0.9.33.2/linux-ar71xx_generic/linux-3.10.4/arch/mips/include/asm/mach-ath79/war.h \
  include/asm-generic/bitops/non-atomic.h \
  include/asm-generic/bitops/fls64.h \
  include/asm-generic/bitops/ffz.h \
  include/asm-generic/bitops/find.h \
    $(wildcard include/config/generic/find/first/bit.h) \
  include/asm-generic/bitops/sched.h \
  /home/shizhai/new_zhongwang/trunk/build_dir/target-mips_r2_uClibc-0.9.33.2/linux-ar71xx_generic/linux-3.10.4/arch/mips/include/asm/arch_hweight.h \
  include/asm-generic/bitops/arch_hweight.h \
  include/asm-generic/bitops/const_hweight.h \
  include/asm-generic/bitops/le.h \
  include/asm-generic/bitops/ext2-atomic.h \
  include/linux/log2.h \
    $(wildcard include/config/arch/has/ilog2/u32.h) \
    $(wildcard include/config/arch/has/ilog2/u64.h) \
  include/linux/typecheck.h \
  include/linux/printk.h \
    $(wildcard include/config/early/printk.h) \
    $(wildcard include/config/printk.h) \
    $(wildcard include/config/dynamic/debug.h) \
  include/linux/init.h \
    $(wildcard include/config/broken/rodata.h) \
  include/linux/kern_levels.h \
  include/linux/dynamic_debug.h \
  include/linux/string.h \
    $(wildcard include/config/binary/printf.h) \
  include/uapi/linux/string.h \
  /home/shizhai/new_zhongwang/trunk/build_dir/target-mips_r2_uClibc-0.9.33.2/linux-ar71xx_generic/linux-3.10.4/arch/mips/include/asm/string.h \
    $(wildcard include/config/cpu/r3000.h) \
  include/linux/errno.h \
  include/uapi/linux/errno.h \
  /home/shizhai/new_zhongwang/trunk/build_dir/target-mips_r2_uClibc-0.9.33.2/linux-ar71xx_generic/linux-3.10.4/arch/mips/include/asm/errno.h \
  /home/shizhai/new_zhongwang/trunk/build_dir/target-mips_r2_uClibc-0.9.33.2/linux-ar71xx_generic/linux-3.10.4/arch/mips/include/uapi/asm/errno.h \
  /home/shizhai/new_zhongwang/trunk/build_dir/target-mips_r2_uClibc-0.9.33.2/linux-ar71xx_generic/linux-3.10.4/include/uapi/asm-generic/errno-base.h \
  include/uapi/linux/kernel.h \
  /home/shizhai/new_zhongwang/trunk/build_dir/target-mips_r2_uClibc-0.9.33.2/linux-ar71xx_generic/linux-3.10.4/include/uapi/linux/sysinfo.h \
  /home/shizhai/new_zhongwang/trunk/build_dir/target-mips_r2_uClibc-0.9.33.2/linux-ar71xx_generic/linux-3.10.4/arch/mips/include/asm/div64.h \
  include/asm-generic/div64.h \
  include/linux/cryptohash.h \

lib/md5.o: $(deps_lib/md5.o)

$(deps_lib/md5.o):
