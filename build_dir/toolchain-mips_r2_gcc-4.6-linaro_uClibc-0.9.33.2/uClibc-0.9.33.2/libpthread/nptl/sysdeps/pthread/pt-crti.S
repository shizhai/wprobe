	.section .mdebug.abi32
	.previous
	.gnu_attribute 4, 3
	.abicalls
#APP
	
#include "defs.h"
	
#if defined __i686 && defined __ASSEMBLER__
	
#undef __i686
	
#define __i686 __i686
	
#endif
	
/*@HEADER_ENDS*/
/*@_init_PROLOG_BEGINS*/
	.section .init
#NO_APP
	.section	.init,"ax",@progbits
	.align	2
	.globl	_init
	.set	nomips16
	.type	_init, @function
_init:
	.set	noreorder
	.cpload	$25
	.set	reorder
	addiu	$sp,$sp,-32
	lw	$25,%got(__pthread_initialize_minimal_internal)($28)
	.cprestore	16
	sw	$31,28($sp)
	.reloc	1f,R_MIPS_JALR,__pthread_initialize_minimal_internal
1:	jalr	$25
#APP
 # 86 "libpthread/nptl/sysdeps/pthread/pt-initfini.c" 1
	ALIGN
 # 0 "" 2
 # 87 "libpthread/nptl/sysdeps/pthread/pt-initfini.c" 1
	END_INIT
 # 0 "" 2
 # 89 "libpthread/nptl/sysdeps/pthread/pt-initfini.c" 1
	
/*@_init_PROLOG_ENDS*/
/*@_fini_PROLOG_BEGINS*/
	.section .fini
#NO_APP
	.section	.fini,"ax",@progbits
	.align	2
	.globl	_fini
	.set	nomips16
	.type	_fini, @function
_fini:
	.set	noreorder
	.cpload	$25
	.set	reorder
	addiu	$sp,$sp,-32
	.cprestore	16
	sw	$31,28($sp)
#APP
 # 106 "libpthread/nptl/sysdeps/pthread/pt-initfini.c" 1
	ALIGN
 # 0 "" 2
 # 107 "libpthread/nptl/sysdeps/pthread/pt-initfini.c" 1
	END_FINI
 # 0 "" 2
 # 108 "libpthread/nptl/sysdeps/pthread/pt-initfini.c" 1
	
/*@_fini_PROLOG_ENDS*/
/*@TRAILER_BEGINS*/
	.hidden	__pthread_initialize_minimal_internal
	.ident	"GCC: (OpenWrt/Linaro GCC 4.6-2012.12 r37742) 4.6.4"
