cmd_lib/ctype.o := mips-openwrt-linux-uclibc-gcc -Wp,-MD,lib/.ctype.o.d  -nostdinc -isystem /home/shizhai/new_zhongwang/trunk/staging_dir/toolchain-mips_r2_gcc-4.6-linaro_uClibc-0.9.33.2/lib/gcc/mips-openwrt-linux-uclibc/4.6.4/include -I/home/shizhai/new_zhongwang/trunk/build_dir/target-mips_r2_uClibc-0.9.33.2/linux-ar71xx_generic/linux-3.10.4/arch/mips/include -Iarch/mips/include/generated  -Iinclude -I/home/shizhai/new_zhongwang/trunk/build_dir/target-mips_r2_uClibc-0.9.33.2/linux-ar71xx_generic/linux-3.10.4/arch/mips/include/uapi -Iarch/mips/include/generated/uapi -I/home/shizhai/new_zhongwang/trunk/build_dir/target-mips_r2_uClibc-0.9.33.2/linux-ar71xx_generic/linux-3.10.4/include/uapi -Iinclude/generated/uapi -include /home/shizhai/new_zhongwang/trunk/build_dir/target-mips_r2_uClibc-0.9.33.2/linux-ar71xx_generic/linux-3.10.4/include/linux/kconfig.h -D__KERNEL__ -DVMLINUX_LOAD_ADDRESS=0xffffffff80060000 -DDATAOFFSET=0 -Wall -Wundef -Wstrict-prototypes -Wno-trigraphs -fno-strict-aliasing -fno-common -Werror-implicit-function-declaration -Wno-format-security -fno-delete-null-pointer-checks -Os -fno-caller-saves -mno-check-zero-division -mabi=32 -G 0 -mno-abicalls -fno-pic -pipe -mno-branch-likely -msoft-float -ffreestanding -march=mips32r2 -Wa,-mips32r2 -Wa,--trap -I/home/shizhai/new_zhongwang/trunk/build_dir/target-mips_r2_uClibc-0.9.33.2/linux-ar71xx_generic/linux-3.10.4/arch/mips/include/asm/mach-ath79 -I/home/shizhai/new_zhongwang/trunk/build_dir/target-mips_r2_uClibc-0.9.33.2/linux-ar71xx_generic/linux-3.10.4/arch/mips/include/asm/mach-generic -Wframe-larger-than=1024 -fno-stack-protector -Wno-unused-but-set-variable -fomit-frame-pointer -g -femit-struct-debug-baseonly -fno-var-tracking -Wdeclaration-after-statement -Wno-pointer-sign -fno-strict-overflow -fconserve-stack -DCC_HAVE_ASM_GOTO   -ffunction-sections -fdata-sections  -D"KBUILD_STR(s)=\#s" -D"KBUILD_BASENAME=KBUILD_STR(ctype)"  -D"KBUILD_MODNAME=KBUILD_STR(ctype)" -c -o lib/ctype.o lib/ctype.c

source_lib/ctype.o := lib/ctype.c

deps_lib/ctype.o := \
  include/linux/ctype.h \
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
  include/linux/export.h \
    $(wildcard include/config/have/underscore/symbol/prefix.h) \
    $(wildcard include/config/modules.h) \
    $(wildcard include/config/modversions.h) \
    $(wildcard include/config/unused/symbols.h) \

lib/ctype.o: $(deps_lib/ctype.o)

$(deps_lib/ctype.o):
