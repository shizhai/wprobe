	.section .mdebug.abi32
	.previous
	.gnu_attribute 4, 3
	.abicalls
	.option	pic0
	.text
$Ltext0:
	.cfi_sections	.debug_frame
	.section	.text.dummy,"ax",@progbits
	.align	2
	.globl	dummy
$LFB13 = .
	.file 1 "libpthread/nptl/sysdeps/unix/sysv/linux/gen_lowlevelrwlock.c"
	.loc 1 6 0
	.cfi_startproc
	.set	nomips16
	.ent	dummy
	.type	dummy, @function
dummy:
	.frame	$sp,0,$31		# vars= 0, regs= 0/0, args= 0, gp= 0
	.mask	0x00000000,0
	.fmask	0x00000000,0
	.loc 1 7 0
#APP
 # 7 "libpthread/nptl/sysdeps/unix/sysv/linux/gen_lowlevelrwlock.c" 1
	@@@name@@@MUTEX@@@value@@@0@@@end@@@
 # 0 "" 2
	.loc 1 8 0
 # 8 "libpthread/nptl/sysdeps/unix/sysv/linux/gen_lowlevelrwlock.c" 1
	@@@name@@@NR_READERS@@@value@@@4@@@end@@@
 # 0 "" 2
	.loc 1 9 0
 # 9 "libpthread/nptl/sysdeps/unix/sysv/linux/gen_lowlevelrwlock.c" 1
	@@@name@@@READERS_WAKEUP@@@value@@@8@@@end@@@
 # 0 "" 2
	.loc 1 10 0
 # 10 "libpthread/nptl/sysdeps/unix/sysv/linux/gen_lowlevelrwlock.c" 1
	@@@name@@@WRITERS_WAKEUP@@@value@@@12@@@end@@@
 # 0 "" 2
	.loc 1 11 0
 # 11 "libpthread/nptl/sysdeps/unix/sysv/linux/gen_lowlevelrwlock.c" 1
	@@@name@@@READERS_QUEUED@@@value@@@16@@@end@@@
 # 0 "" 2
	.loc 1 12 0
 # 12 "libpthread/nptl/sysdeps/unix/sysv/linux/gen_lowlevelrwlock.c" 1
	@@@name@@@WRITERS_QUEUED@@@value@@@20@@@end@@@
 # 0 "" 2
	.loc 1 13 0
 # 13 "libpthread/nptl/sysdeps/unix/sysv/linux/gen_lowlevelrwlock.c" 1
	@@@name@@@FLAGS@@@value@@@27@@@end@@@
 # 0 "" 2
	.loc 1 14 0
 # 14 "libpthread/nptl/sysdeps/unix/sysv/linux/gen_lowlevelrwlock.c" 1
	@@@name@@@WRITER@@@value@@@28@@@end@@@
 # 0 "" 2
	.loc 1 15 0
 # 15 "libpthread/nptl/sysdeps/unix/sysv/linux/gen_lowlevelrwlock.c" 1
	@@@name@@@PSHARED@@@value@@@26@@@end@@@
 # 0 "" 2
	.loc 1 16 0
#NO_APP
	j	$31
	.end	dummy
	.cfi_endproc
$LFE13:
	.size	dummy, .-dummy
	.text
$Letext0:
	.section	.debug_info,"",@progbits
$Ldebug_info0:
	.4byte	0x95
	.2byte	0x2
	.4byte	$Ldebug_abbrev0
	.byte	0x4
	.uleb128 0x1
	.4byte	$LASF12
	.byte	0x1
	.4byte	$LASF13
	.4byte	$LASF14
	.4byte	0
	.4byte	0
	.4byte	$Ldebug_ranges0+0
	.4byte	$Ldebug_line0
	.uleb128 0x2
	.byte	0x4
	.byte	0x5
	.ascii	"int\000"
	.uleb128 0x3
	.byte	0x4
	.byte	0x7
	.4byte	$LASF0
	.uleb128 0x3
	.byte	0x4
	.byte	0x7
	.4byte	$LASF1
	.uleb128 0x3
	.byte	0x4
	.byte	0x5
	.4byte	$LASF2
	.uleb128 0x3
	.byte	0x1
	.byte	0x8
	.4byte	$LASF3
	.uleb128 0x3
	.byte	0x2
	.byte	0x7
	.4byte	$LASF4
	.uleb128 0x3
	.byte	0x8
	.byte	0x5
	.4byte	$LASF5
	.uleb128 0x3
	.byte	0x1
	.byte	0x8
	.4byte	$LASF6
	.uleb128 0x3
	.byte	0x1
	.byte	0x6
	.4byte	$LASF7
	.uleb128 0x3
	.byte	0x2
	.byte	0x5
	.4byte	$LASF8
	.uleb128 0x3
	.byte	0x8
	.byte	0x7
	.4byte	$LASF9
	.uleb128 0x3
	.byte	0x8
	.byte	0x4
	.4byte	$LASF10
	.uleb128 0x3
	.byte	0x1
	.byte	0x2
	.4byte	$LASF11
	.uleb128 0x4
	.byte	0x1
	.4byte	$LASF15
	.byte	0x1
	.byte	0x6
	.byte	0x1
	.4byte	$LFB13
	.4byte	$LFE13
	.byte	0x2
	.byte	0x8d
	.sleb128 0
	.byte	0
	.section	.debug_abbrev,"",@progbits
$Ldebug_abbrev0:
	.uleb128 0x1
	.uleb128 0x11
	.byte	0x1
	.uleb128 0x25
	.uleb128 0xe
	.uleb128 0x13
	.uleb128 0xb
	.uleb128 0x3
	.uleb128 0xe
	.uleb128 0x1b
	.uleb128 0xe
	.uleb128 0x11
	.uleb128 0x1
	.uleb128 0x52
	.uleb128 0x1
	.uleb128 0x55
	.uleb128 0x6
	.uleb128 0x10
	.uleb128 0x6
	.byte	0
	.byte	0
	.uleb128 0x2
	.uleb128 0x24
	.byte	0
	.uleb128 0xb
	.uleb128 0xb
	.uleb128 0x3e
	.uleb128 0xb
	.uleb128 0x3
	.uleb128 0x8
	.byte	0
	.byte	0
	.uleb128 0x3
	.uleb128 0x24
	.byte	0
	.uleb128 0xb
	.uleb128 0xb
	.uleb128 0x3e
	.uleb128 0xb
	.uleb128 0x3
	.uleb128 0xe
	.byte	0
	.byte	0
	.uleb128 0x4
	.uleb128 0x2e
	.byte	0
	.uleb128 0x3f
	.uleb128 0xc
	.uleb128 0x3
	.uleb128 0xe
	.uleb128 0x3a
	.uleb128 0xb
	.uleb128 0x3b
	.uleb128 0xb
	.uleb128 0x27
	.uleb128 0xc
	.uleb128 0x11
	.uleb128 0x1
	.uleb128 0x12
	.uleb128 0x1
	.uleb128 0x40
	.uleb128 0xa
	.byte	0
	.byte	0
	.byte	0
	.section	.debug_aranges,"",@progbits
	.4byte	0x1c
	.2byte	0x2
	.4byte	$Ldebug_info0
	.byte	0x4
	.byte	0
	.2byte	0
	.2byte	0
	.4byte	$LFB13
	.4byte	$LFE13-$LFB13
	.4byte	0
	.4byte	0
	.section	.debug_ranges,"",@progbits
$Ldebug_ranges0:
	.4byte	$LFB13
	.4byte	$LFE13
	.4byte	0
	.4byte	0
	.section	.debug_line,"",@progbits
$Ldebug_line0:
	.section	.debug_str,"MS",@progbits,1
$LASF5:
	.ascii	"long long int\000"
$LASF0:
	.ascii	"unsigned int\000"
$LASF14:
	.ascii	"/home/shizhai/new_zhongwang/trunk/build_dir/toolchain-mi"
	.ascii	"ps_r2_gcc-4.6-linaro_uClibc-0.9.33.2/uClibc-0.9.33.2\000"
$LASF1:
	.ascii	"long unsigned int\000"
$LASF15:
	.ascii	"dummy\000"
$LASF9:
	.ascii	"long long unsigned int\000"
$LASF6:
	.ascii	"unsigned char\000"
$LASF3:
	.ascii	"char\000"
$LASF2:
	.ascii	"long int\000"
$LASF10:
	.ascii	"double\000"
$LASF13:
	.ascii	"libpthread/nptl/sysdeps/unix/sysv/linux/gen_lowlevelrwlo"
	.ascii	"ck.c\000"
$LASF11:
	.ascii	"_Bool\000"
$LASF12:
	.ascii	"GNU C 4.6.4\000"
$LASF4:
	.ascii	"short unsigned int\000"
$LASF7:
	.ascii	"signed char\000"
$LASF8:
	.ascii	"short int\000"
	.ident	"GCC: (OpenWrt/Linaro GCC 4.6-2012.12 r37742) 4.6.4"
